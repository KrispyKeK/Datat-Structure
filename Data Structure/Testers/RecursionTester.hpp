//
//  RecursionTester.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 3/5/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <stdio.h>
#include <iostream>
#include "Timer.hpp"

using namespace std;
class RecursionTester{
public:
    void testRecursionNumbers();
    void testRecursionString();
private:
    int fib(int start);
    string mystery(string word);
};
#endif /* RecursionTester_hpp */
