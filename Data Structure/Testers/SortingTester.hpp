//
//  SortingTester.hpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 3/15/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <stdio.h>
#include <iostream>
#include "FileController.hpp"
#include "Timer.hpp"
class SortingTester{
private:
    int swapCount;
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> info, int small, int large);
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
