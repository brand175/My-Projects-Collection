// Calulator 3000 v. 0.8
// Description: This program asks the user what operation (addition, subtraction, multiplication, division) they would like to do and then perform,
//              then asks for two numbers to perform the calulation on and then peforms that calculation for them. The user is then given
//              the oppertunity to choose whether they would like to do another calculation, or quit.
// Date:
// Created by: Mr. Dawson (incomplete and with errors!)
// Known Limitations: Their are several errors that need to be corrected, as well as missing functionality that is described in the description and needs to be added

// Edited by brand175
// Known Limitations: forgot how to do a loop
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main() {
    
    char operation;
    float numOne;
    float numTwo;
    float Multiply = '*';
    float Divide = '/';
    float Addition = '+';
    float Subtraction = '-';
    
    
        cout << " Welcome to Calulator 3000! \n****************************\n\nWhat operation would you like to perform? ";
   
        cin >> operation;

    
        cout << "please input half of equation (2+2 without the +2)\n";
    
        cin >> numOne;
   
    
        cout << "please input half of equation (2+2 without the +2)\n";

        cin >> numTwo;
    
    
        cout << "Are you Ready for your answer\n";
    
   
        if ( operation == '-' ) {
        
        cout << "The difference between " << numOne << " and " << numTwo << " is: " << numOne - numTwo;
        
    }
    
        else if ( operation == '*' ) {
        
        cout << "The product of " << numOne << " and " << numTwo << " is: " << numOne * numTwo;
        
    }
    
        else if ( operation == '/' ) {
        
        cout << "The quoitent of " << numOne << " and " << numTwo << " is: " << numOne / numTwo;
        
    }
    
    
        else if ( operation == '+' ) {
        
        cout << "The quoitent of " << numOne << " and " << numTwo << " is: " << numOne + numTwo;
        
    }
    
    cout << " \n";
    return 0;
}

