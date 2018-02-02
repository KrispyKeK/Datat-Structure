//
//  controller.cpp
//  Datat  Structure
//
//  Created by Dela Cruz, Juan on 2/2/18.
//  Copyright © 2018 Dela Cruz, Juan. All rights reserved.
//

#include "controller.hpp"
#include <vector>
#include "CrimeData.hpp"
#include "Tools/Timer.hpp"
#include "FileController.hpp"
using namespace std;

void controller :: start()
{
    findMaxMin();
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jdel8359/Downloads/crime.csv");
    for (int loop = 200; loop < 210 ; loop ++)
    {
        cout << "Spot # " << loop << ": " << myData[loop] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}

void controller :: findMaxMin(){
    Timer searchTimer;
    searchTimer.startTimer();
    int maxIndex = 0;
    int minIndex = 0;
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/jdel8359/Downloads/crime.csv");
    for (int index = 1; index < myData.size(); index++){
        if (myData[minIndex] < myData[index]){
            minIndex = index;
        }
        if (myData[maxIndex] > myData[index]){
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest crime stat is at "<< maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
