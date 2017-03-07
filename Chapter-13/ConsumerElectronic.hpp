//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#ifndef ConsumerElectronic_hpp
#define ConsumerElectronic_hpp

#include <stdio.h>
#include <iostream>
#include "Date.hpp"
using namespace std;

class ConsumerElectronic
{
    
private:
    double price;
    string brand;
    string model;
    int rating;
    Date releaseDate;
public:
    ConsumerElectronic();
    ConsumerElectronic(double aPrice, string aBrand, string aModel, int aRating, Date areleaseDate);
    bool setPrice(double aPrice);
    bool setBrand(string aBrand);
    bool setModel(string aModel);
    bool setRating(int aRating);
    bool setReleaseDate(Date aReleaseDate);
    
    double getPrice(void);
    string getBrand(void);
    string getModel(void);
    int    getRating(void);
    Date   getReleaseDate(void);
    
    virtual ~ConsumerElectronic();
    
    
};

#endif /* CONSUMERElectronic_HPP_ */
