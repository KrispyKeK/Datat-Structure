//
//  Array.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 2/2/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array{
public:
    //constructor
    Array<Type>(int size);
    //copy constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
   //Operators
    Type& operator [] (int index);
    Type operator [] (int index) const;
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
private:
    Type * internalArray;
    int size;
};
template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy){
    this -> size = toCopy.toSize();
    
    internalArray = new Type[size];
    for (int index = 0; index < size; index++){
        internalArray[index] = toCopy[index];
    }
    return *this;
}
template <class Type>
Type & Array<Type> :: operator[](int index){
    assert (index >= 0 && index < size);
    return internalArray[index];
}
template <class Type>
int Array<Type> :: getSize() const{
    return size;
}
template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value = internalArray[index];
    
    return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    assert(pos >= 0 && pos < size);
    internalArray[pos] = item;
}

#endif /* Array_hpp */
