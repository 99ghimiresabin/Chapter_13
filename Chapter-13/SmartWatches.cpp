//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#include "SmartWatches.hpp"

using namespace std;

SmartWatches::SmartWatches() {
    // TODO Auto-generated constructor stub
    cout << "Default SmartWatches being created" << endl;
    this->bandSize = "Large";
    this->hasGps = true;
    this->hasWifi = true;
    this->waterProof = true;
    this->connectivityRange = 25;
    
}
SmartWatches::SmartWatches(int aBandSize,bool aHasGps, bool aHasWifi, bool aWaterProof, int aConnectivityRange)
{
    cout << "Non Default SmartWatches being created" << endl;
    this->bandSize = aBandSize;
    this->hasGps = aHasGps;
    this->hasWifi = aHasWifi;
    this->waterProof = aWaterProof;
    this->connectivityRange = aConnectivityRange;
}

bool SmartWatches::setBandSize(int aBandSize)
{
    this->bandSize = aBandSize;
    return true;
}
bool SmartWatches::setHasGps(bool aHasGps)
{
    this->hasGps = aHasGps;
    return true;
}
bool SmartWatches::setHasWifi(bool aHasWifi)
{
    this->hasWifi = aHasWifi;
    return true;
}
bool SmartWatches::setWaterProof(bool aWaterProof)
{
    this->waterProof = aWaterProof;
    return true;
}
bool SmartWatches:: setConnectivityRange(int aConnectivityRange)
{
    this->connectivityRange = aConnectivityRange;
    return true;
}

string  SmartWatches::getBandSize(void)
{
    return this->bandSize;
}
bool SmartWatches::getHasGps(void)
{
    return this->hasGps;
}
bool SmartWatches::getHasWifi(void)
{
    return this->hasWifi;
}
bool SmartWatches::getWaterProof(void)
{
    return this->waterProof;
}
int  SmartWatches::getConnectivityRange(void)
{
    return this->connectivityRange;
}



SmartWatches::~SmartWatches() {
    // TODO Auto-generated destructor stub
    cout << "You are deleting SmartWatches" << endl;
    
}
