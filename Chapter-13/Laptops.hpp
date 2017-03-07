//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#ifndef Laptops_hpp
#define Laptops_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Laptops
{
private:
    int screenSize;
    bool retinaDisplay;
    double speed;
    bool fingerprintscanner;
    int Rotation;
    
public:
    Laptops();
    Laptops(int aScreenSize, bool aRetinaDisplay, double aSpeed, bool aFingerPrintScanner, int aRotation);
    
    bool setScreenrSize(int aScreenSize);
    bool setRotation(int aRotation);
    bool setREtinaDisplay(bool aRetinaDisplay);
    bool setSpeed(double aSpeed);
    bool setFingerPrintScanner(bool aFingerPrintScanner);
    
    int getScreenSize(void);
    int getRotation(void);
    bool getRetinaDisplay(void);
    double getSpeed(void);
    bool getFingerprintScanner(void);
    
    
    virtual ~Laptops();
    
};

#endif /* Laptops_hpp */
