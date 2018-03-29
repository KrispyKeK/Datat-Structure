//
//  Tree.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 3/27/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include "Tree.hpp"
#include "BinaryTreeNode.hpp"
template <class Type>
class Tree{
protected:
    BinaryTreeNode<Type> * root;
public:
    
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //Data Members
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    
    virtual void inOrderTraversals() = 0;
    virtual void preOrderTraversals() = 0;
    virtual void postOrderTraversals() = 0;
};
#endif /* Tree_hpp */
