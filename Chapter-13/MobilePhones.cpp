//
//  MobilePhones.cpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/7/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#include "MobilePhones.hpp"

using namespace std;

MobilePhones::MobilePhones() {
    // TODO Auto-generated constructor stub
    cout << "Default MobilePhones being created" << endl;
    this->screenSize = 5;
    this->cameraPixel = 21;
    this->batteryBackup = 8;
    this->hasLte = true;
    this->operatingSystem = "ios";
    
}
MobilePhones::MobilePhones(int aScreenSize,double acameraPixel, int abatteryBackup, bool ahasLte, string aoperatingSystem)
{
    cout << "Non Default MobilePhones being created" << endl;
    this->screenSize = aScreenSize;
    this->cameraPixel = acameraPixel;
    this->batteryBackup = abatteryBackup;
    this->hasLte = ahasLte;
    this->operatingSystem = aoperatingSystem;
}

bool MobilePhones::setScreenSize(int aScreenSize)
{
    this->screenSize = aScreenSize;
    return true;
}
bool MobilePhones::setCameraPixel(double aCameraPixel)
{
    this->cameraPixel = aCameraPixel;
    return true;
}
bool MobilePhones::setBatteryBackup(int aBatteryBackup){
    
    this->batteryBackup = aBatteryBackup;
    return true;
}
bool MobilePhones::setHasLte(bool aHasLte)
{
    this->hasLte = aHasLte;
    return true;
}
bool MobilePhones::setOperatingSystem(string aOperatingSystem)
{
    this->operatingSystem = aOperatingSystem;
    return true;
}

int MobilePhones::getScreensize(void)
{
    return this->screenSize;
}
int MobilePhones::getCameraPixel(void)
{
    return this->cameraPixel;
}
bool MobilePhones::getHasLte(void)
{
    return this->hasLte;
}
string MobilePhones::getOperatingSystem(void)
{
    return this->operatingSystem;
}
int  MobilePhones::getBatteryBackup(void)
{
    return this->batteryBackup;
}



MobilePhones::~MobilePhones() {
    // TODO Auto-generated destructor stub
    cout << "You are deleting MobilePhones" << endl;
    
}
