//
//  Desktop.hpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/6/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#ifndef Desktop_hpp
#define Desktop_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Desktop
{
private:
    int monitorSize;
    double monitorWeight;
    bool hasCdDrive;
    bool hasFloppyDrive;
    bool hasBluetooth;

public:
    Desktop();
    Desktop(int aMonitorSize, double aMonitorWeight, bool ahasCdDrive, bool hasBluetooth, bool hasFloppyDrive);

    bool setMonitorSize(int aMonitorSize);
    bool setMonitorWeight(double aMonitorWeight);
    bool setHasCdDrive(bool ahasCdDrive);
    bool setFloppyDrive(bool ahasFloppyDrive);
    bool setHasBluetooth(bool ahasBluetooth);
   
    int getMonitorSize(void);
    double getMonitorWeight(void);
    bool getHasCdDrive(void);
    bool getFloppyDrive(void);
    bool getHasBluetooth(void);
   

    virtual ~Desktop();
    
};
#endif /* Desktop_hpp */
