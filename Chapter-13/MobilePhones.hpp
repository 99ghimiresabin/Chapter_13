//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
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
