//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************

#ifndef SmartWatches_hpp
#define SmartWatches_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class SmartWatches
{
private:
    string bandSize;
    bool hasGps;
    bool hasWifi;
    bool waterProof;
    int connectivityRange;
    
public:
    SmartWatches();
    SmartWatches(int aBandSize,bool aHasGps, bool aHasWifi, bool aWaterProof, int aConnectivityRange);
    
    bool setBandSize(int aBandSize);
    bool setHasGps(bool aHasGps);
    bool setHasWifi(bool aHasWifi);
    bool setWaterProof(bool aWaterProof);
    bool setConnectivityRange(int aConnectivityRange);
   
    int getScreensize(void);
    int getCameraPixel(void);
    int getBatteryBackup(void);
    bool getHasLte(void);
    string getOperatingSystem(void);
    
    string getBandSize(void);
    bool getHasGps(void);
    bool getHasWifi(void);
    bool getWaterProof(void);
    int getConnectivityRange(void);
   
    
    virtual ~SmartWatches();
    
};


#endif /* SmartWatches_hpp */
