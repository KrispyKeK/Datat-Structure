//
//  BinaryTreeTester.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 3/27/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "BinaryTreeNode.hpp"
#include <iostream>
#include "BinarySearchTree.hpp"

class BinaryTreeTester{
private:
    BinarySearchTree<int> testTree;
    BinaryTreeNode<int> testNode;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
