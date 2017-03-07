//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#include<iostream>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>
#include "Date.hpp"
using namespace std;
Date::Date()
{
    day   = 01;
    month = 01;
    year  = 1970;
}
Date::Date (int aDay, int amonth, int ayear)
{
    this->day = aDay;
    this->month = amonth;
    this->year = ayear;
}


bool Date::setday(int aDay)
{
    this->day = aDay;
    return true;
}
bool Date::setmonth(int aMonth)
{
    this->month = aMonth;
    return true;
    
    
}
bool Date::setyear(int ayear)
{
    this->year = ayear;
    return true;
}

int Date::getday(void)
{
    return day;
}

int Date::getmonth(void)
{
    return month;
}

int Date::getyear(void)
{
    return year;
}
string Date::getDateString(int aDay,int aMonth, int aYear)
{    
    string result1;
    string result2;
    string result3;
    string Result;
    
    ostringstream convert1;
    ostringstream convert2;
    ostringstream convert3;
    
    convert1 << aDay;
    convert2 << aMonth;
    convert3 << aYear;
    
    result1 = convert1.str();
    result2 = convert2.str();
    result3 = convert3.str();
    
    Result = result1 + "/" + result2 + "/" + result3 ;
    
    return Result;
    
    
    
    
    
}
Date::~Date() {
    // TODO Auto-generated destructor stub
}

