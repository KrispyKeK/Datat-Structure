//
//  BinarySearchTree.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 3/29/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <stdio.h>
#include "Tree.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>{
    
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type>* startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum;
    Type findMaximum;
};
template <class Type>
BinarySearchTree<Type> :: BinarySearchTree(){
    this->root = nullptr;
}
template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree<Type>(){
    
}
template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert){
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if (current == nullptr){
        this -> root = insertMe;
    }
    else{
        while(current != nullptr){
            previous = current;
            if (itemToInsert < current -> getData()){
                current = current->getLeftNode();
            }
            else if (itemToInsert > current -> getData()){
                current = current ->getRightNode();
            }
            else{
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
    }
    if(previous -> getData() > itemToInsert){
        previous -> setLeftNode(insertMe);
    }
    else{
        previous ->setRightNode(insertMe);
    }
    insertMe->setRootNode(previous);
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(){
    inOrderTraversal(this->root);
}
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart){
    if(inStart!= nullptr){
        cout << "Checking Left" << endl;
        inOrderTraversal(inStart->getLeftNode());
        cout << "Node Contents: " << inStart->getData() << endl;
        cout << "Checking Right" << endl;
        inOrderTraversal(inStart->getRightNode());
    }
}
template <class Type>
bool BinarySearchTree<Type> :: contains(Type value){
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: remove(Type item){
    
}
template <class Type>
int BinarySearchTree<Type>::getHeight(){
    return calculateHeight(this->root);
}
template<class Type>
int BinarySearchTree<Type>::getSize(){
    int size = 0;
    size += calculateSize(this->root);
    return size;
}
template <class Type>
int BinarySearchTree<Type>::calculateSize(BinaryTreeNode<Type> * current){
    if (current != nullptr){
        return calculateSize(current->getLeftNode()) + calculateSize(current -> getRightNode()+1);
    }
    return 0;
}
template <class Type>
int BinarySearchTree<Type>::calculateHeight(BinaryTreeNode<Type> * current){
    if(current!=nullptr){
        return max(calculateHeight(current->getLeftNode()), calculateHeight(current->getRightNode())) + 1;
    }
    return 0;
}
template <class Type>
bool BinarySearchTree<Type> :: isComplete(){
    int index = 0;
    int size = getSize();
    return isComplete(this->root, index, size);
}
template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size){
    if(startNode == nullptr){
        return true;
    }
    if (index >= size){
        return false;
    }
    return isComplete(startNode->getLeftNode(), 2 * index + 1, size) && isComplete(startNode->getRightNode(), 2 * index + 2, size);
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced(){
    return isBalanced(this->root);
}
template <class Type>
bool BinarySearchTree<Type>::isBalanced(BinaryTreeNode<Type> * current){
    int leftHeight = 0;
    int rightHeight = 0;
    if (current == nullptr){
        return true;
    }
    leftHeight = calculateHeight(current->getLeftNode());
    rightHeight = calculateHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight-rightHeight);
    bool leftBalanced = isBalanced(current->getLeftNode());
    bool rightBalanced = isBalanced(current->getRightNode());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced){
        return true;
    }
    return false;
}
#endif /* BinarySearchTree_hpp */

