//*****************
//Project Name: Chapter 13
//Project Description: class aggregration
//Project Author: Ghimire, Sabin
//Is this an extra credit Project:  No
//Date completed: 03/07/2017
//Operating system used:OSx
//IDE Used:xCode


//*****************

#include <iostream>
#include "ConsumerElectronic.hpp"
#include "Desktop.hpp"
#include "Laptops.hpp"
#include "MobilePhones.hpp"
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    cout << "Welcome to my Class Aggregration Project" << endl << endl;
    int n;
    cout << "How many objects do you want to create" << endl;
    cin >> n;
    
    ConsumerElectronic** myElectronics = new ConsumerElectronic*[n];
    for (int i=0; i<n; i++)
    {
        myElectronics[i] = new ConsumerElectronic();
    }
    for (int i=0; i<n; i++)
    {
        delete myElectronics[i];
    }
    
    delete[] myElectronics;
    
    vector<Desktop*> myDesktop;
    
    for (int i=0; i<n; i++)
    {
        Desktop *aDesktop = new Desktop();
        myDesktop.push_back(aDesktop);
    }
    for (int i=0; i<n; i++)
    {
        delete myDesktop[i];
    }
    
    cout<< "Program ending Have a nice day" << endl;
    
    return 0;
}
