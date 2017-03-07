//
//  main.cpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/6/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#include <iostream>
#include "ConsumerElectronic.hpp"
#include "Desktop.hpp"
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
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
    
    return 0;
}
