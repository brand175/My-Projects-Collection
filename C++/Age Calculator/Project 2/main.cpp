//
//  Age Calculator
//  Description
//  Created on 2018-02-05
//  Copyright © 2018 brand175. All rights reserved.
//  Known Limitations

#include <iostream>
using namespace std;


int main(){

int numAge;
int numYear;
int numMonth;
    
numAge = 18;
numYear = 1999;
numMonth = 12;
cout << "What Year were you born ";
cin >> numYear;
cout << 2017 - numYear;
cout << "\n is your age\n";
cout << "you may retire in\n";
cout << 2065 - numYear + 2000;
cout << " \n";
return 0;
}
