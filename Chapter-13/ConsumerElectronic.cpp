//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#include "ConsumerElectronic.hpp"
#include "Date.hpp"
#include <iostream>

using namespace std;

ConsumerElectronic::ConsumerElectronic() {
    // TODO Auto-generated constructor stub
    cout << "Default ConsumerElectronic being created" << endl;
    this->price = 700;
    this->brand = "Apple";
    this->model = "iPhone";
    this->rating = 5;
    this->releaseDate = {01,01,1970};
    
}
ConsumerElectronic::ConsumerElectronic(double aPrice, string aBrand, string aModel, int aRating, Date areleaseDate)
{
    cout << "Non Default ConsumerElectronic being created" << endl;
    this->price = aPrice;
    this->brand = aBrand;
    this->model = aModel;
    this->rating = aRating;
    this->releaseDate = areleaseDate;
    
    
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
bool ConsumerElectronic::setReleaseDate(Date aReleaseDate)
{
    this-> releaseDate = aReleaseDate;
    return true;
}


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
Date  ConsumerElectronic::getReleaseDate(void)
{
    return this->releaseDate;
}



ConsumerElectronic::~ConsumerElectronic() {
    // TODO Auto-generated destructor stub
    cout << "You are deleting ConsumerElectronic" << endl;
    
}

