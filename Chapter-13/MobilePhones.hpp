//
//  MobilePhones.hpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/7/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#ifndef MobilePhones_hpp
#define MobilePhones_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class MobilePhones
{
private:
    int screenSize;
    double cameraPixel;
    int batteryBackup;
    bool hasLte;
    string operatingSystem;
    
public:
    MobilePhones();
    MobilePhones(int aScreenSize,double acameraPixel, int abatteryBackup, bool ahasLte, string aoperatingSystem);
    
    bool setScreenSize(int aScreenSize);
    bool setCameraPixel(double aCameraPixel);
    bool setBatteryBackup(int aBatteryBackup);
    bool setHasLte(bool aHasLte);
    bool setOperatingSystem(string aOperatingSystem);
    
    int getScreensize(void);
    int getCameraPixel(void);
    int getBatteryBackup(void);
    bool getHasLte(void);
    string getOperatingSystem(void);
    
    
    virtual ~MobilePhones();
    
};


#endif /* MobilePhones_hpp */
