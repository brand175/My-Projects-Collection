//
//  main.cpp
//  Calculator Advance
//  Description: A calculator that is able to do functions
//  Created on 2018-04-03.
//  Copyright © 2018 brand175. All rights reserved.
//  Known Limitations

#include <iostream>
using namespace std;

// i decided to change my spacing space


// Formula for Subtraction (-)

float Subtraction (int S, int S1) {
float solution1 = S - S1;

   
    return solution1;

    }

    // Formula for Addition (+)

float Addition (int A, int A1)  {
float solution2 = A + A1;

   
    return solution2;

    }

    // Formula for Division (/)

float Division (float D, float D1)  {
float solution3 = D / D1;
    
   
    return solution3;

    }

    // Formula for Multiplication (x)

float Multiply (float M, float M1)  {
float solution4 = M * M1;

    
    return solution4;

    }

    // ignore me plz, im lonely :(

void Calculations () {
    
    cout << "testing\n";


    }



int main() {
    
    float numOne;
    float numTwo;
    int input;
    char goagain;
    
        
    do{

        // This selects what type of math you want to do
        
        cout << "operation ( 1= Minus  2= Add  3= Divide  4= Multiply)\n";
    
        cin >> input;
    
    
    // This is the First number input you enter

    cout << "please input half of equation (2+2 without the +2)\n";
    
    cin >> numOne;
    
    
    // This is the Second number input you enter

    cout << "please input half of equation (2+2 without the +2)\n";
    
    cin >> numTwo;
    
    cout << "Answer is ";
   


    // Subtraction input for operation

if (input == 1) {
   
    cout << Subtraction (numOne, numTwo);
    cout << "\n";

    }
    
    // Addition input for operation
        
else if (input == 2) {
            
    cout << Addition (numOne, numTwo);
    cout << "\n";
    
    }
    
    // Division input for operation

else if (input == 3) {
        
    cout << Division (numOne, numTwo);
    cout << "\n";

    }
    
    // Multiplication input for operation
    
else if (input == 4) {
            
    cout << Multiply (numOne, numTwo);
    cout << "\n";

    }
    
    // User must type must Yes or the Program will stop working
    
    cout << "\nrepeat (y/n)\n";
    cin >> goagain;
    
    }
    
    // If the answer was yes, then it would Restart the Program

while (goagain == 'y');

    
    return 0;

    }
