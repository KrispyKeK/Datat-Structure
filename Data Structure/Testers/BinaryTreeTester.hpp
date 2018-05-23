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
using namespace std;

class BinaryTreeTester{
private:
    BinarySearchTree<int> testTree;
    BinarySearchTree<string> testStringTree;
public:
    void doTreeStuff();
};


#endif /* BinaryTreeTester_hpp */
