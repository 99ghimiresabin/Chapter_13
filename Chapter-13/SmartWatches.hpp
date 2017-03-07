//
//  SmartWatches.hpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/7/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

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
