//
//  Desktop.cpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/6/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#include "Desktop.hpp"
#include <iostream>

using namespace std;

Desktop::Desktop() {
    // TODO Auto-generated constructor stub
    cout << "Default Desktop being created" << endl;
    this->monitorSize = 15;
    this->monitorWeight = 56;
    this->hasCdDrive = true;
    this->hasFloppyDrive = true;
    this->hasBluetooth = true;
    
}
Desktop::Desktop(int aMonitorSize, double aMonitorWeight, bool ahasCdDrive, bool ahasBluetooth, bool ahasFloppyDrive)
{
    cout << "Non Default Desktop being created" << endl;
    this->monitorSize = aMonitorSize;
    this->monitorWeight = aMonitorWeight;
    this->hasCdDrive = ahasCdDrive;
    this->hasFloppyDrive =ahasFloppyDrive;
    this->hasBluetooth = ahasBluetooth;
}

bool Desktop::setMonitorSize(int aMonitorSize)
{
    this->monitorSize = aMonitorSize;
    return true;
}
bool Desktop::setMonitorWeight(double aMonitorWeight)
{
    this->monitorWeight = aMonitorWeight;
    return true;
}
bool Desktop::setHasCdDrive(bool ahasCdDrive)
{
    this->hasCdDrive = ahasCdDrive;
    return true;
}
bool Desktop::setFloppyDrive(bool ahasFloppyDrive)
{
    this->hasFloppyDrive = ahasFloppyDrive;
    return true;
}
bool Desktop::setHasBluetooth(bool ahasBluetooth)
{
    this->hasBluetooth = ahasBluetooth;
    return true;
}

int Desktop::getMonitorSize(void)
{
    return this->monitorSize;
}
double Desktop::getMonitorWeight(void)
{
    return this->monitorWeight;
}
bool Desktop::getHasCdDrive(void)
{
    return this->hasCdDrive;
}
bool Desktop::getFloppyDrive(void)
{
    return this->hasFloppyDrive;
}
bool Desktop::getHasBluetooth(void)
{
    return this->hasBluetooth;
}



Desktop::~Desktop() {
    // TODO Auto-generated destructor stub
    cout << "You are deleting Desktop" << endl;
    
}


