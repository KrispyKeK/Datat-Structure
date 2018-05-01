//
//  ThrowAway.cpp
//  Data Structure
//
//  Created by Dela Cruz, Juan on 4/27/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#include "ThrowAway.hpp"
#include "Controller/controller.hpp"
using namespace std;
int main(){
    int sample = 7;
    string word = "asda";
    string wordTwo = "asda";
    cout << &sample << endl;
    cout << &word << endl;
    unsigned long address = (unsigned long) &sample;
    cout << address << endl;
    return 0;
    
    unsigned long * storage;
    storage = new unsigned long [0xffffffffff];
    storage[address] = 0;
    
    cout << address << endl;
    if (0x7fff5fbff618 == address){
        cout << "The same" << endl;
    }
}
