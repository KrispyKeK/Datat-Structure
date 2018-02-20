//
//  DoublyLinkedList.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 2/8/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <assert.h>
#include "LinearNode.hpp"

template <class Type>
class List{
protected:
    int size;
public:
    virtual void add(Type item) = 0;
    virtual void addAtItem(int index, Type item) = 0;
    virtual Type remove(int item) = 0;
    virtual Type getFromIndex(int index) = 0;
    
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
