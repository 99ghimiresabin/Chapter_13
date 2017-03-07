//
//  utilities.h
//  CPPUtilities
//
//  Created by Bill Komanetsky on 1/29/15.
//  Copyright (c) 2015 Bill Komanetsky. All rights reserved.
//

#ifndef __CPPUtilities__utilities__
#define __CPPUtilities__utilities__

#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <time.h>
using namespace std;

//
//Prototypes for utilities.cpp
//
string makeUpperCase(string);
string makeLowerCase(string);
void clearCIN(void);
string inputString(string, int, int);
int inputInt(string, int, int, int);
double inputDouble(string, double, double, double);
string centerString(string, int);
int getRandomInt(int, int);
double getRandomDouble(int, int, int);
bool verifyAction(string);
char askOverWrite(void);
string getRandomString(int, int);
bool linearSearch(vector<int> aVector , int value); /// LINEAR SEARCH
int VectorBinSearch(vector<int> aVector, int value); /// BINARY SEARCH
void  bubbleSort(vector<int> aVector, char input); /// BUBBLE SORT
void selectSort(vector<int> aVector, char input); /// SELECTION SORT
int* expandArray(int* x, int csize, int nsize); /// Expand Array
int* compressArray(int* x, int csize, int nsize); /// Compress Arrray



#endif /* defined(__CPPUtilities__utilities__) */
