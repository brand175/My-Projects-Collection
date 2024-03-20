//
//  main.cpp
//  maze test 2
//
//  Created by Period 1 on 2018-04-26.
//  Copyright © 2018 brand175. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int start;
    
    int meow;
    char input1;
    char input2;
    char input3;
    int up = 'w';
    int down = 's';
    int left = 'a';
    int right = 'd';
    int yes;
    int grid;
    char goagain1;
    char goagain2;
    char goagain3;
    
    
    // create moves positions based on grid box (64) instead of doing it the hard way.
    
    cout << "Welcome to The Maze\n\n";   // Try a grid pattern then delete it to match it.
    
    cout << "Do you want to start (Press 1 to start)\n";
    cin >> start;
    
    
    do{{{
        if (start == 1) {
            
            
            
            cout << "_________________________________________________\n";
            cout << "|                                   |           |\n";
            cout << "|                                   |           |\n";
            cout << "|     ___________________           |           |\n";
            cout << "|     |           |           |           |     |\n";
            cout << "|     |           |           |           |     |\n";
            cout << "|     |           |     ______|___________|     |\n";
            cout << "|           |     |                       |     |\n";
            cout << "|           |     |                       |     |\n";
            cout << "|___________|     |__________________     |     |\n";
            cout << "      |                       |           |     |\n";
            cout << "   O  |                       |           |     |\n";
            cout << "      |__________________     |           |     |\n";
            cout << "|     |                 |     |     |     |     |\n";
            cout << "|     |                 |     |     |     |     |\n";
            cout << "|     |     _______     |     |     |     |     |\n";
            cout << "|           |     |     |     |     |           |\n";
            cout << "|           |     |     |     |     |           |\n";
            cout << "|___________|     |     |_____|     |______     |\n";
            cout << "|                 |           |           |     |\n";
            cout << "|                 |           |           |     |\n";
            cout << "|     ____________|______     |______     |     |\n";
            cout << "|                                         |      \n";
            cout << "|                                         |      \n";
            cout << "|_________________________________________|______\n";
        }
        
        cin >> input1;
        
        
        
        
    }
        
        if(input1 == down){
            cout << "_________________________________________________\n";
            cout << "|                                   |           |\n";
            cout << "|                                   |           |\n";
            cout << "|     ___________________           |           |\n";
            cout << "|     |           |           |           |     |\n";
            cout << "|     |           |           |           |     |\n";
            cout << "|     |           |     ______|___________|     |\n";
            cout << "|           |     |                       |     |\n";
            cout << "|           |     |                       |     |\n";
            cout << "|___________|     |__________________     |     |\n";
            cout << "      |                       |           |     |\n";
            cout << "      |                       |           |     |\n";
            cout << "      |__________________     |           |     |\n";
            cout << "|     |                 |     |     |     |     |\n";
            cout << "|     |                 |     |     |     |     |\n";
            cout << "|     |     _______     |     |     |     |     |\n";
            cout << "|           |     |     |     |     |           |\n";
            cout << "|  O        |     |     |     |     |           |\n";
            cout << "|___________|     |     |_____|     |______     |\n";
            cout << "|                 |           |           |     |\n";
            cout << "|                 |           |           |     |\n";
            cout << "|     ____________|______     |______     |     |\n";
            cout << "|                                         |      \n";
            cout << "|                                         |      \n";
            cout << "|_________________________________________|______\n";
            
        }
        
        cin >> input2;
        
    } while (input2 == up);
    
    if(input2 == right){
        cout << "_________________________________________________\n";
        cout << "|                                   |           |\n";
        cout << "|                                   |           |\n";
        cout << "|     ___________________           |           |\n";
        cout << "|     |           |           |           |     |\n";
        cout << "|     |           |           |           |     |\n";
        cout << "|     |           |     ______|___________|     |\n";
        cout << "|           |     |                       |     |\n";
        cout << "|           |     |                       |     |\n";
        cout << "|___________|     |__________________     |     |\n";
        cout << "      |                       |           |     |\n";
        cout << "      |                       |           |     |\n";
        cout << "      |__________________     |           |     |\n";
        cout << "|     |                 |     |     |     |     |\n";
        cout << "|     |                 |     |     |     |     |\n";
        cout << "|     |     _______     |     |     |     |     |\n";
        cout << "|           |     |     |     |     |           |\n";
        cout << "|        O  |     |     |     |     |           |\n";
        cout << "|___________|     |     |_____|     |______     |\n";
        cout << "|                 |           |           |     |\n";
        cout << "|                 |           |           |     |\n";
        cout << "|     ____________|______     |______     |     |\n";
        cout << "|                                         |      \n";
        cout << "|                                         |      \n";
        cout << "|_________________________________________|______\n";
        
    }
    
    
    
    cin >> input3;
    
    
    } while (input3 == up);

    if(input3 == up){
        cout << "_________________________________________________\n";
        cout << "|                                   |           |\n";
        cout << "|                                   |           |\n";
        cout << "|     ___________________           |           |\n";
        cout << "|     |           |           |           |     |\n";
        cout << "|     |           |           |           |     |\n";
        cout << "|     |           |     ______|___________|     |\n";
        cout << "|           |     |                       |     |\n";
        cout << "|           |     |                       |     |\n";
        cout << "|___________|     |__________________     |     |\n";
        cout << "      |                       |           |     |\n";
        cout << "      |                       |           |     |\n";
        cout << "      |__________________     |           |     |\n";
        cout << "|     |                 |     |     |     |     |\n";
        cout << "|     |  O              |     |     |     |     |\n";
        cout << "|     |     _______     |     |     |     |     |\n";
        cout << "|           |     |     |     |     |           |\n";
        cout << "|           |     |     |     |     |           |\n";
        cout << "|___________|     |     |_____|     |______     |\n";
        cout << "|                 |           |           |     |\n";
        cout << "|                 |           |           |     |\n";
        cout << "|     ____________|______     |______     |     |\n";
        cout << "|                                         |      \n";
        cout << "|                                         |      \n";
        cout << "|_________________________________________|______\n";
        
        
    }


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
