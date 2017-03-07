//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#include "Laptops.hpp"

using namespace std;

Laptops::Laptops() {
    // TODO Auto-generated constructor stub
    cout << "Default Laptops being created" << endl;
    this->screenSize = 15;
    this->retinaDisplay= true;
    this->speed = 500;
    this->fingerprintscanner = true;
    this->Rotation = 90;
    
}
Laptops::Laptops(int aScreenSize, bool aRetinaDisplay, double aSpeed, bool aFingerPrintScanner, int aRotation)
{
    cout << "Non Default Laptops being created" << endl;
    this->screenSize = aScreenSize;
    this->retinaDisplay = aRetinaDisplay;
    this->speed = aSpeed;
    this->fingerprintscanner = aFingerPrintScanner;
    this->Rotation = aRotation;
}

bool Laptops::setScreenrSize(int aScreenSize)
{
    this->screenSize = aScreenSize;
    return true;
}
bool Laptops::setREtinaDisplay(bool aRetinaDisplay)
{
    this->retinaDisplay = aRetinaDisplay;
    return true;
}
bool Laptops::setSpeed(double aSpeed)
{
    this->speed = aSpeed;
    return true;
}
bool Laptops::setFingerPrintScanner(bool aFingerPrintScanner)
{
    this->fingerprintscanner = aFingerPrintScanner;
    return true;
}
bool Laptops::setRotation(int aRotation)
{
    this->Rotation = aRotation;
    return true;
}

int Laptops::getScreenSize(void)
{
    return this->screenSize;
}
bool Laptops::getRetinaDisplay(void)
{
    return this->retinaDisplay;
}
double Laptops::getSpeed(void)
{
    return this->speed;
}
bool Laptops::getFingerprintScanner(void)
{
    return this->fingerprintscanner;
}
int Laptops::getRotation(void)
{
    return this->Rotation;
}



Laptops::~Laptops() {
    // TODO Auto-generated destructor stub
    cout << "You are deleting Laptops" << endl;
    
}
