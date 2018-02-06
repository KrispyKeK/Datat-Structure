//
//  ArrayTester.cpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 2/6/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#include "ArrayTester.hpp"
void ArrayTester:: testArrayUse()
{
    Array<int> firstArray(10);
    for (int index = 0; index < 10; index++){
        firstArray.setAtIndex(index, index);
    }
    for (int index = 0; index < firstArray.getSize();index++){
        cout << firstArray[index] << endl;
        
    }
    Array<int> secondArray(400);
    cout << secondArray.getSize() << endl;
    cout << firstArray.getSize() << endl;
    
    Array<int> thirdArray(secondArray);
    cout << thirdArray.getSize() << endl;
    firstArray = thirdArray;
    cout << firstArray.getSize() << endl;
    thirdArray[5] = 5;
    cout << thirdArray[5] << endl;
}
void ArrayTester:: testAdvancedArray()
{
    cout << "Test";
}
