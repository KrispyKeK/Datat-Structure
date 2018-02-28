//
//  TestingStacksAndQueues.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 2/28/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include <stdio.h>
#include "Timer.hpp"
#include "FileController.hpp"
#include "Queue.hpp"
#include "Stack.hpp"
#include "List.hpp"
#include <iostream>
using namespace std;

class TestingStacksAndQueues{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};
#endif /* TestingStacksAndQueues_hpp */
