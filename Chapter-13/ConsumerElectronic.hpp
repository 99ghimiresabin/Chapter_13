//
//  consumerElectronic.hpp
//  Chapter_13
//
//  Created by Sabin Ghimire on 3/6/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#ifndef ConsumerElectronic_hpp
#define ConsumerElectronic_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class ConsumerElectronic
{
    
private:
    double price;
    string brand;
    string model;
    int rating;
    //Date releaseDate; // build class
public:
    ConsumerElectronic();
    ConsumerElectronic(double aPrice, string aBrand, string aModel, int aRating);
    bool setPrice(double aPrice);
    bool setBrand(string aBrand);
    bool setModel(string aModel);
    bool setRating(int aRating);
   // bool setReleaseDate(Date aReleaseDate);
    
    double getPrice(void);
    string getBrand(void);
    string getModel(void);
    int    getRating(void);
   // Date   getReleaseDate(void);
    
    virtual ~ConsumerElectronic();
    
    
};

#endif /* CONSUMERElectronic_HPP_ */
