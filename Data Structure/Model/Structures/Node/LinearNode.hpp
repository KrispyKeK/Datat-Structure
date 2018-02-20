//
//  LinearNode.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 2/6/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <stdio.h>
#include "Node.hpp"
template <class Type>
class LinearNode : public Node<Type>{
protected:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>(){
    this -> next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data){
    this -> next = nullptr;
}
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data){
    this -> next = next;
}

template <class Type>
void LinearNode<Type>:: setNextNode(LinearNode<Type> * nextNodePointer){
    this -> next = nextNodePointer;
}
template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode(){
    return next;
}
//void LinkedList<type> :: addAtIndex(int index, Type item){
//    assert(index >= 0 && index <= size);
//    if (inde == size){
//        add(item);
//    }
//    else{
//        LinearNode<Type> * toBeAddes = new LinearNode<Type>(item);
//        if (index == 0){
//            toBeAdded -> setNextNode(front);
//            front = toBeAdded;
//        }
//        else{
//            LinearNode<Type> * previous = nullptr;
//            LinearNode<Type> * current = front;
//
//
//
//
//        }
//    }
//}

#endif /* LinearNode_hpp */
