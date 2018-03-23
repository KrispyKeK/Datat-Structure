//
//  GraphTester.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 3/23/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <stdio.h>
#include <iostream>
#include "Graph.hpp"
using namespace std;

class GraphTester{

private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};
#endif /* GraphTester_hpp */
