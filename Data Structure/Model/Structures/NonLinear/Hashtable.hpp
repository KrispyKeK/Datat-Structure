//
//  Hashtable.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 4/27/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include <stdio.h>
#include "HashNode.hpp"
using namespace std;
template <class Type>
class Hashtable{
private:
    HashNode<Type> ** internalStorage;
    long size;
    double loadFactor;
    long getNextPrimeNumber();
    bool isPrime(long current);
    int candidateNumber;
    void resize();
    long capacity;
    long findPosition(HashNode<Type> * insertedNode);
    long getSize();
    long handleCollision(HashNode<Type> * current, long index);
public:
    Hashtable();
    ~Hashtable();
    void insert(Type data);
    
};
template <class Type>
Hashtable<Type> :: Hashtable(){
    internalStorage = new HashNode<Type>[capacity];
    capacity = 101;
    size = 0;
    loadFactor = .8;
}
template<class Type>
Hashtable<Type> :: ~Hashtable(){
    delete [] internalStorage;
}
template <class Type>
long Hashtable<Type> :: getNextPrimeNumber(){
    long nextPrime = (this ->capacity * 2) +1;
    while(!isPrime(nextPrime)){
        nextPrime+=2;
    }
    return nextPrime;
}
template <class Type>
void Hashtable<Type> :: resize(){
    
}
template <class Type>
void Hashtable<Type> :: insert(Type value){
    
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert){
    return -1;
}
template <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type> *, long index){
    return -1;
}
template <class Type>
long Hashtable<Type>::getSize(){
    return -1;
}
template <class Type>
bool Hashtable<Type> :: isPrime(long current){
    if(candidateNumber <= 1){
        return false;
    }
    else if(current == 2 || current == 3){
        return true;
    }
    else if (current % 2 == 0){
        return false;
    }
    else{
        for (int next = 3; next <= sqrt(current)+1; next+=2){
            if(current % next == 0){
                return false;
            }
            return true;
        }
    }
    
}
#endif /* Hashtable_hpp */
