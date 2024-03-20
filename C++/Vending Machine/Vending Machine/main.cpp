//
//  main.cpp
//  Vending Machine
//  Description: A program that simulates a Real life vending machine
//  Created on 2018-03-07.
//  Copyright © 2018 brand175. All rights reserved.
//  Known limitations: stop purchaches when inventory = 0

#include <iostream>

int main() {
    using namespace std;
    
    int inventory [6] = {2,2,2,2,2,2};
    int input;
    int decision;
    float coins;
    float prices [6] = {1.25,1.25,35,1.50,25,4.25};
    float deposit [6] = {0,0,0,0,0,0};
    char goagain;
    int change;
    int meow;
    int confirm;
    int Succret;
    
    
    do {
    
        cout << "Welcome to distroxia plaza's vending machine\n\n";
    
        cout << "____________________________________________\n";
        cout << "|############################################|\n";
        cout << "|#|                           |##############|\n";
        cout << "|#|  =====  ..--''`  |~~``|   |##|````````|##|\n";
        cout << "|#|  |   |  \     |  :    |   |##| Exact  |##|\n";
        cout << "|#|  |___|   /___ |  | ___|   |##| Change |##|\n";
        cout << "|#|  /=__\  ./.__\   |/,__\   |##| Only   |##|\n";
        cout << "|#|  \__//   \__//    \__//   |##|________|##|\n";
        cout << "|#|===========================|##############|\n";
        cout << "|#|```````````````````````````|##############|\n";
        cout << "|#| =.._      +++     //////  |##############|\n";
        cout << "|#| \/  \     | |     \    \  |#|`````````|##|\n";
        cout << "|#|  \___\    |_|     /___ /  |#| _______ |##|\n";
        cout << "|#|  / __\\  /|_|\   // __\   |#| |1|2|3| |##|\n";
        cout << "|#|  \__//-  \|_//   -\__//   |#| |4|5|6| |##|\n";
        cout << "|#|===========================|#| |7|8|9| |##|\n";
        cout << "|#|```````````````````````````|#| ``````` |##|\n";
        cout << "|#| ..--    ______   .--._.   |#|[=======]|##|\n";
        cout << "|#| \   \   |    |   |    |   |#|  _   _  |##|\n";
        cout << "|#|  \___\  : ___:   | ___|   |#| ||| ( ) |##|\n";
        cout << "|#|  / __\  |/ __\   // __\   |#| |||  `  |##|\n";
        cout << "|#|  \__//   \__//  /_\__//   |#|  ~      |##|\n";
        cout << "|#|===========================|#|_________|##|\n";
        cout << "|#|```````````````````````````|##############|\n";
        cout << "|############################################|\n";
        cout << "|#|||||||||||||||||||||||||||||####```````###|\n";
        cout << "|#||||||||||||PUSH|||||||||||||####\|||||/###|\n";
        cout << "|############################################|\n";
        cout << "\\\\\\\\\\\\\\\\\\\\\\///////////////////////\n";
        cout << "|________________|Artwork by C.M Rogers|___|\n\n\n";
    
        
        cout << "*******INTALIZING VENDING MACHINE INTERFACE BZZZZZZZZRRRTT*****************\n\n";
    
        cout << "    Choose a product\n\n";
    
    
        cout << "Product 1 is Mars Bar $1.25\n";
        cout << "Product 2 is Twix $1.25\n";
        cout << "Product 3 is Bag of Weed $35\n";
        cout << "Product 4 is 3 Musketeers Bar $1.50\n";
        cout << "Product 5 is Vape Juice $25\n";
        cout << "Product 6 is Water $4.25\n\n";
    
       
        // displays how much products are left avaliable.
        
        cout << "When any product hits zero dont buy it. Suriously though. How stupid are you if you did. I'll refill it for you if you call me.\n\n";
        
        cout << inventory[0] << " Mars Bar are left remaining\n";
        cout << inventory[1] << " Twix are left remaining\n";
        cout << inventory[2] << " Bag of Weed are left remaining\n";
        cout << inventory[3] << " 3 Musketeers Bar are left remaining\n";
        cout << inventory[4] << " Vape Juice are left remaining\n";
        cout << inventory[5] << " Waters are left remaining\n\n";
        
        cout << "Change return = 8\n\n";
        
        cout << "Insert money and select product\n";

        cin >> coins >> input;

   
        // This section is for change return after tying in the money you have put in.
        
    
    if (input == 101){

        cout << "$";
        cout << coins << " Change return\n";
    }

   
        // Admins secret code
        
    if (coins == 1234){ // You must type 0 or a product will be used if the input matches the number
        
        cout << "Admin has codes plz enter dem\n";
        cin >> Succret;
            
 
        // Purpose is to show total money in coin box.
            
        if (Succret == 404){
            
        cout << "$" << deposit[0] + deposit[1] + deposit[2] + deposit[3] + deposit[4] + deposit[5];
        }
            
        // refills inventory
    
    if (Succret == 2020) for (int i= 0; i < 6; i++)
{
 
        inventory[i] = 8;
}
}
        


        // This section detects if you had enough money to buy the product and despence it if so.
       
       
    if (coins >= 1.25 && input == 1 && inventory[0])    // && inventory[0] makes it not go to -1.
    {
            
        inventory[0] = inventory[0] - 1;
        deposit[0] = deposit[0] + 1.25;
            
        cout << "Enjoy wasting your money\nHeres your Mars bar\nHave a nice day :3\n$";
    }
        
    
        
    if (coins >= 1.25 && input == 2 && inventory[1])    // && inventory[1] makes it not go to -1.
    {
        
        inventory[1] = inventory[1] - 1;
        deposit[1] = deposit[1] + 1.25;
           
        cout << "Enjoy wasting your money\nHeres your Twix\nHave a nice day :3\n$";
    }

    
       
    else if (coins >= 35.00 && input == 3 && inventory[2])  // && inventory[2] makes it not go to -1.
    {
          
        inventory[2] = inventory[2] - 1;
        deposit[2] = deposit[2] + 35.00;
            
        cout << "Enjoy wasting your money\nHeres your Bag of Weed\nHave a nice day :3\n$";
    }

    
        
    else if (coins >= 1.50 && input == 4 && inventory[3])   // && inventory[3] makes it not go to -1.
    {
      
        inventory[3] = inventory[3] - 1;
        deposit[3] = deposit[3] + 1.50;
            
        cout << "Enjoy wasting your money\nHeres your 3 Musketeers bar\nHave a nice day :3\n$";
    }
    
    
        
    else if (coins >= 25.00 && input == 5 && inventory[4])  // && inventory[4] makes it not go to -1.
    {
      
        inventory[4] = inventory[4] - 1;
        deposit[4] = deposit[4] + 25.00;
            
        cout << "Enjoy wasting your money\nHeres your Vape Juice\nHave a nice day :3\n$";
    }

   

    else if (coins >= 4.25 && input == 6 && inventory[5])   // && inventory[5] makes it not go to -1.
    {
      
        inventory[5] = inventory[5] - 1;
        deposit[5] = deposit[5] + 4.25;
            
        cout << "Enjoy wasting your money\nHeres your Water\nHave a nice day :3\n$";
    }

    
        // This section detects if the user has it's money back or not.
    
    
    if (input == 1 && coins > 1.25)
    {
        
        cout << coins - 1.25 << " Change return\n";
    }
       
                
    if (input == 2 && coins > 1.25)
    {
        
        cout << coins - 1.25 << " Change return\n";
    }
    
        
        
    if (input == 3 && coins > 35)
    {
        
        cout << coins - 35 << " Change return\n";
    }
    
   
    if (input == 4 && coins > 1.50)
    {
        
        cout << coins - 1.50 << " Change return\n";
    }
    
    
    if (input == 5 && coins > 25.00)
    {
        
        cout << coins - 25.00 << " Change return\n";
    }
    
    
    
    if (input == 6 && coins > 4.25)
    {
        
        cout << coins - 4.25 << " Change return\n";
    }
    
    
    
        // This section detects wether you have had enough money to buy the product from it's buying price.
    
    
    if (input == 1 && coins <= 1.24)
    {
        cout << "awe you poor bastard :(\nYou Need $" << 1.25 - coins;
        cout << " More\n";
    }
    
    
    if (input == 2 && coins <= 1.24)
    {
        cout << "awe you poor bastard :(\nYou Need $" << 1.25 - coins;
        cout << " More\n";
    }
    
    
    if (input == 3 && coins <= 34.99)
    {
        cout << "awe you poor bastard :(\nYou Need $" << 35.00 - coins;
        cout << " More\n";
    }
    
    
    if (input == 4 && coins <= 1.49)
    {
        cout << "awe you poor bastard :(\nYou Need $" << 1.50 - coins;
        cout << " More\n";
    }
    
    
    if (input == 5 && coins <= 24.99)
    {
        cout << "awe you poor bastard :(\nYou Need $" << 25.00 - coins;
        cout << " More\n";
    }
    
    
    if (input == 6 && coins <= 4.24)
    {
        cout << "awe you poor bastard :(\nYou Need $" << 4.25 - coins;
        cout << " More\n";
    }

        
    if (input == 8 && coins > 0)
    {
        cout << "Change Return $" << coins;
   
    }
        
        cout << "\nTransaction repeat";
        cin >> goagain;

    }   while (goagain == 'y');
    
    
    return 0;
    }
