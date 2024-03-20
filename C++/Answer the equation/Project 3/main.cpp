//
//  Answer The Equation
//  Created on 2018-02-07.
//  Copyright © 2018 brand175. All rights reserved.
//  Known limitations

#include <iostream>
#include <iomanip>

    int main() {
    int num = 4;
    int numb;
    float number;
    using namespace std;
    
    cout << "Whats 2+2= ";
    cin >> num;
    num = 4; // haven't figured out how tell the user it's wrong when inputed after answered.
    
    cout << "whats 1+1= ";
    cin >> numb;
    numb = 2;
    
    double d = number;
    std::cout << std::setprecision(2) <<d<<'\n'; // sets the amount of decimal places
    std::cout << std::fixed;
   
    cout << "answers are ";
    cout << (d = num);
    cout << " and ";
    cout << (d = numb);
   
    cout << ". If they don't match then your wrong  ";
    
    return 0;
}
