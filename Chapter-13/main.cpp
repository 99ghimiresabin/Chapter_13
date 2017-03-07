//
//  main.cpp
//  Chapter-13
//
//  Created by Sabin Ghimire on 3/6/17.
//  Copyright © 2017 Sabin Ghimire. All rights reserved.
//

#include <iostream>
#include "ConsumerElectronic.hpp"
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
    
    return 0;
}
