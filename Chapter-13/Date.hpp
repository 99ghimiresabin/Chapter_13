//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************
#ifndef Date_hpp
#define Date_hpp
#include <iostream>
#include <stdio.h>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date (int aDay, int amonth, int ayear);
    
    bool setday(int aDay);
    bool setmonth(int aMonth);
    bool setyear(int aYear);
    
    
    int getday(void);
    int getmonth(void);
    int getyear(void);
    string getDateString(int aday, int amonth, int aYear);
    virtual ~Date();
};


#endif /* Date_hpp */
