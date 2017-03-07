//
//  consumerElectronic.cpp
//  Chapter_13
//
//  Created by Sabin Ghimire on 3/6/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#include "ConsumerElectronic.hpp"
#include <iostream>

using namespace std;

ConsumerElectronic::ConsumerElectronic() {
    // TODO Auto-generated constructor stub
    cout << "Default ConsumerElectronic being created" << endl;
    this->price = 700;
    this->brand = "Apple";
    this->model = "iPhone";
    this->rating = 5;
    //Date releaseDate;
    
}
ConsumerElectronic::ConsumerElectronic(double aPrice, string aBrand, string aModel, int aRating)
{
    cout << "Non Default ConsumerElectronic being created" << endl;
    this->price = aPrice;
    this->brand = aBrand;
    this->model = aModel;
    this->rating = aRating;
// this->releaseDate ;
    
    
}
bool ConsumerElectronic::setPrice(double aPrice)
{
    this->price = aPrice;
    return true;
}
bool ConsumerElectronic::setBrand(string aBrand)
{
    this->brand = aBrand;
    return true;
}
bool ConsumerElectronic::setModel(string aModel){
    
    this->model = aModel;
    return true;
}
bool ConsumerElectronic::setRating(int aRating){
    this->rating = aRating;
    return true;
}
// bool setReleaseDate(Date aReleaseDate);

double ConsumerElectronic::getPrice(void)
{
    return this->price;
}
string ConsumerElectronic::getBrand(void){
    return this->brand;
}
string ConsumerElectronic::getModel(void){
    return  this->model;
}
int    ConsumerElectronic::getRating(void){
    return this->rating;
}
// Date   getReleaseDate(void);



ConsumerElectronic::~ConsumerElectronic() {
    // TODO Auto-generated destructor stub
    cout << "You are deleting ConsumerElectronic" << endl;
    
}

