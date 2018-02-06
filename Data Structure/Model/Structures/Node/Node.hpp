//
//  Node.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 2/6/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
template <class Type>
class Node{
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
private:
    
protected:
    Type data;
    
};
template <class Type>
Node<Type> :: Node(){
    //Default COnstructor
}
template <class Type>
Node<Type> :: Node(Type data){
    this -> data = data;
}
template <class Type>
void Node<Type> :: setData(Type data){
    this -> data = data;
}
template <class Type>
Type Node<Type> :: getData(){
    return data;
}
#endif /* Node_hpp */
