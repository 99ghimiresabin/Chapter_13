//
//  utilities.cpp
//  CPPUtilities
//
//  Created by Bill Komanetsky on 1/29/15.
//  Copyright (c) 2015 Bill Komanetsky. All rights reserved.
//

#include "utilities.hpp"

//
//This routine will take a string and convert it to upper case
//Since a string is basically an array of char values, the string
//passed in will be processed one character at a time making each
//character upper-case
//
string makeUpperCase(string theString) {
    
    locale settings;
    string newString;
    
    for(short i = 0; i < theString.size(); ++i)
        newString += (toupper(theString[i], settings));
    
    return newString;
    
}//makeUpperCase

//
//This routine will take a string and convert it to lower case
//Since a string is basically an array of char values, the string
//passed in will be processed one character at a time making each
//character lower-case
//
string makeLowerCase(string theString) {
    
    locale settings;
    string newString;
    
    for(short i = 0; i < theString.size(); ++i)
        newString += (tolower(theString[i], settings));
    
    return newString;
    
}//makeUpperCase

//
//Clear the CIN input buffer to avoid problems
//
void clearCIN(void) {
    cin.clear();
    cin.ignore(32768, '\n');
    return;
}//clearCIN

//
//Input a string to be returned to the calling function.
//
string inputString(string promptString, int minLength, int maxLength) {
    string userInput;
    
    while (true) {
        cout << promptString << "\n";
        getline(cin, userInput);
        if (userInput.size() < minLength || userInput.size() > maxLength) {
            cout << "The string you entered is too short or too long.  Should be " << minLength << " to " << maxLength << " in Length\n";
            cout << "Please try again\n";
        }//if
        else
            break;
    }//while
    return userInput;
}//inputString

//
//Input a integer value to be returned to the calling function.  Also, validate the
//the minimum and maximum value of the integer input.
//
int inputInt(string promptString, int minValue, int maxValue, int exitValue) {
    int userInput;
    
    cout << promptString << " \n";
    while (true) {
        cin >> userInput;
        if (!cin.fail()) {
            char myChar = cin.peek();
            if (myChar == '\n')
                if ((userInput >= minValue && userInput <= maxValue) || userInput == exitValue)
                    break;
                else {
                    cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                    clearCIN();
                }//else
                else {
                    cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                    clearCIN();
                }//else
        }//if
        else {
            cout << "Invalid integer value entered. Please try again.\n";
            clearCIN();
        }//else
    }
    clearCIN();
    return userInput;
}//inputInt

//
//Input a double value to be returned to the calling function.  Also, validate the
//the minimum and maximum value of the double input.
//
double inputDouble(string promptString, double minValue, double maxValue, double exitValue) {
    double userInput;
    
    cout << promptString << " \n";
    while (true) {
        cin >> userInput;
        if (!cin.fail()) {
            char myChar = cin.peek();
            if (myChar == '\n')
                if ((userInput >= minValue && userInput <= maxValue) || userInput == exitValue)
                    break;
                else {
                    cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                    clearCIN();
                }//else
                else {
                    cout << "Invalid value entered.  Should be between " << minValue << " and " << maxValue << " Please try again\n";
                    clearCIN();
                }//else
        }//if
        else {
            cout << "Invalid double value entered. Please try again.\n";
            clearCIN();
        }//else
    }
    clearCIN();
    return userInput;
}//inputdouble

//
//Send a string and center it in a returned string
//
string centerString(string stringToCenter, int toWidth)
{
    string outputString;
    int l = 0;
    int pos = 0;
    
    l = static_cast<int>(stringToCenter.length());
    pos=(toWidth-l)/2;
    for(int i=0;i<pos;i++) {
        outputString = outputString + " ";
    }//for
    outputString = outputString + stringToCenter;
    return outputString;
}//centerString

//
// This function will return a random integer no larger than Max
//
int getRandomInt(int Min, int Max) {
    int tempInt = 0;
    
    while (true) {
        tempInt = rand() % Max;
        if (tempInt >= Min)
            break;
        else {}
    }//while
    
    return tempInt;
}//getRandomInt

//
//This function will return a random double with 2 decimal digits, and not greater than Max
//
double getRandomDouble(int Min, int Max, int decimalPlaces) {
    double returnNum;
    int tempInt;
    double tempDouble;
    
    while (true) {
        returnNum = ((double)rand()/RAND_MAX);
        tempInt = (returnNum * Max)*(pow(10, decimalPlaces));
        tempDouble = static_cast<double>(tempInt)/(pow(10, decimalPlaces));
        if (tempDouble >= Min)
            break;
        else {}
    }//while
    return tempDouble;
}//getRandomDouble

//
// This function will return a random integer no larger than Max
//
string getRandomString(int Min, int Max) {
    string tempString;
    
    int size = getRandomInt(Min, Max);
    for (int ctr=0; ctr<size; ctr++) {
        char tempChar = getRandomInt(97, 122);
        tempString += tempChar;
    }//for
    
    return tempString;
}//getRandomInt

//
//Display a prompt asking the user if they want to
//sort the vector ascending or descening.
//
bool verifyAction(string userPrompt) {
    char userInput;
    bool returnValue = false;
    
    while (true) {
        cout << "\n";
        cout << userPrompt << "\n";
        cout << "<Y>es, <N>o ==> ";
        cin >> userInput;
        if (toupper(userInput) == 'Y') {
            returnValue = true;
            break;
        }//if
        else if (toupper(userInput) == 'N') {
            returnValue = false;
            break;
        }//else if
        else {
            cout << "Invalid selection, please try again\n";
        }//else
        clearCIN();
    }//while
    
    clearCIN();
    return returnValue;
}//verifyAction

//
//Ask the user if they want to append, overwrite or quit the read operation
//
char askOverWrite(void) {
    char userChoice;
    
    cout << "You already have data loaded into the system\n";
    cout << "Do you want to (O)verwrite, (A)ppend or (Q)uit? ";
    cin >> userChoice;
    switch (toupper(userChoice)) {
        case 'O': {
            break;
        }//case O
        case 'A':
            break;
        case 'Q':
        default: {
            cout << "Operation Aborted\n";
            return 'Q';
        }//default
    }//switch
    
    return toupper(userChoice);
    
}//askOverwrite




bool linearSearch(vector<int> aVector , int value)
{
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < aVector.size() && !found)
	{
			if (aVector[index] == value)
			{
			found = true;
			position = index;
			}
			index++;
	}
	return found;
}

int VectorBinSearch(vector<int> aVector, int value) {
		int first = 0;
		int last= (aVector.size()-1);
		int middle= 0;
		int position = -1;
		bool found = false;

		while (!found && first <= last) {
			middle = (first + last) / 2;
			if (aVector[middle] == value) {
				found = true;
				position = middle;
			}

			else if (aVector[middle] > value)
				last = middle - 1;
			else
				first = middle + 1;
		}
		return position;
	}

void  bubbleSort(vector<int> aVector, char input) {
	bool swap;
	int temp;
	if (input == 'A')
	{
		do {
			swap = false;
			for (int count = 0; count < (aVector.size() - 1); count++) {
				if (aVector[count] > aVector[count + 1]) {
					temp = aVector[count];
					aVector[count] = aVector[count + 1];
					aVector[count + 1] = temp;
					swap = true;
				}
			}
		}
		while (swap);

		for (int i = 0; i< aVector.size(); i++)
		{
			cout << aVector[i] <<"\t";
		}
		cout << endl;
	}
	else if (input == 'D')
	{
		do {
					swap = false;
					for (int count = 0; count < (aVector.size() - 1); count++) {
						if (aVector[count] < aVector[count + 1]) {
							temp = aVector[count];
							aVector[count] = aVector[count + 1];
							aVector[count + 1] = temp;
							swap = true;
						}
					}
				}
				while (swap);

				for (int i = 0; i< aVector.size(); i++)
				{
					cout << aVector[i] <<"\t";
				}
				cout << endl;
	}
}

void selectSort(vector<int> aVector, char input) {

	if (input == 'A')
	{
		int startScan, minIndex, minValue;
		for (startScan = 0; startScan < (aVector.size() - 1); startScan++) {
			minIndex = startScan;
			minValue = aVector[startScan];
			for (int index = startScan + 1; index < aVector.size(); index++) {
				if (aVector[index] < minValue) {
					minValue = aVector[index];
					minIndex = index;
				}
			}
			aVector[minIndex] = aVector[startScan];
		aVector[startScan] = minValue;
		}
		for (int i = 0; i< aVector.size(); i++)
				{
					cout << aVector[i] <<"\t";
				}
		cout << endl;

	}

	else if (input == 'D')
	{
		int startScan, minIndex, minValue;
				for (startScan = 0; startScan < (aVector.size() - 1); startScan++) {
					minIndex = startScan;
					minValue = aVector[startScan];
					for (int index = startScan + 1; index < aVector.size(); index++) {
						if (aVector[index] > minValue) {
							minValue = aVector[index];
							minIndex = index;
						}
					}
					aVector[minIndex] = aVector[startScan];
				aVector[startScan] = minValue;
				}
				for (int i = 0; i< aVector.size(); i++)
						{
							cout << aVector[i] <<"\t";
						}
				cout << endl;

	}


}

int* expandArray(int* x, int csize, int nsize)
{
    int* dArray = new int[nsize];
    
    if (nsize > csize)
    {
        cout << "\n\n";
        /// Copying array to dynamic array
        for(int i=0; i<nsize; i++)
        {
            dArray[i]= x[i];
            cout << "Copying row " << i << " with data " << x[i] << " into the new array" << endl;
        }
        cout << "\n\n";
        cout << "Expanded array by " << nsize - csize << endl;
        cout << "\n";
        
    }
    
    else
    {
        cout << "Cannot expand the array because nsize < cisze";
    }
    
    return dArray;
}

int* compressArray(int* x, int csize, int nsize)
{
    int* dArray = new int[nsize];
    if (nsize < csize)
    {
        cout << "\n\n";
        for(int i=0; i<nsize; i++)
        {
            dArray[i]= x[i];
            
            cout << "Copying row " << i << " with data " << x[i] << " into the new array" << endl;
        }
        cout << "\n";
        cout << "compressed array by " <<  csize - nsize << endl;
        cout << "\n";
        
    }
    else
    {
        cout << "Cannot compress the array because new size" << nsize << ">" << "current size" << csize;
    }
    return dArray;
};




