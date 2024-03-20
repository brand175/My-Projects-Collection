
//  Scary Door
//  Created on 2018-02-21
//  Copyright © 2018 brand175. All rights reserved.
//  Known Limitations: Don't know how to loop
//  Description
#include <iostream>

    int main() {
    using namespace std;
    
    
    float yes = 1;
    float no = 2;
    float input = 3;
    float door;
    cout << "Welcome to the haunted mansion\n";
    cout << "How to play (1 = yes and 2 = no)\n";
    cout << " \n";
    char goagain;
    
        do{{ // I managed to get the important part such as the doors to loop. But not my intro part which isn't part of the marking program. Or at least i think it isn't. Their is some bugs in my program. If you type 3 in the beginning.
    
    
    
    
    
    
    
    
    
    cout << "=================================\n|                               |\n"; // Layer 0
    cout << "|                               |\n";                                    // Layer 0
    cout << "|    _                    _     |\n";                                    // Layer 0
    cout << "|   ( )                  ( )    |\n";                                    // Layer 0
    cout << "|   |~|                  |~|    |\n";                                    // Layer 0
    cout << "|   |_|                  |_|    |\n";                                    // Layer 0
    cout << "|            _______            |\n";                                    // Layer 0
    cout << "|           (   |   )           |\n";                                    // Layer 0
    cout << "|           |   |   |           |\n";                                    // Layer 0
    cout << "|           |  o|o  |           |\n";                                    // Layer 0
    cout << "|           |   |   |           |\n";                                    // Layer 0
    cout << "=================================\n            |       |\n";             // Layer 0
    cout << "            |     ` |\n";                                                // Layer 0
    cout << "            |  `    |\n";                                                // Layer 0
    cout << "            |     ` |      ___\n";                                       // Layer 0
    cout << "  ___       | `     |      | |\n";                                       // Layer 0
    cout << " (x_x)      |   `  `|\n";                                                // Layer 0
    cout << "  -|-       |    `  |      ___\n";                                       // Layer 0
    cout << "   |        | `     |      | |\n";                                       // Layer 0
    cout << "  ⎡⎤              \n";                                                  // Layer 0
    cout << "          \n";                                                           // Layer 0
    
    cout << "This haunted mansion looks very familiar to you\nTheres a gate up ahead\nWould you like to open it?\n";
    
    
    cin >> input;
    
    
    if (input == 2){
    cout << "You turned back and walked away\nYou saw someone in the distance\nYou passed out and died\nYour body was never found\nBad End\n";
        
        
        return 0;}  // Insert loop here somehow for restart???
    

    else if (input == 1){
    cout << "You walk towards the doors\nReguarding your decision to go in\nYou open the door on your left\nA mysterious voice coming from the ceiling says\nChoose 1 of the 3 doors\nChoose carefully or face death\n\nYou start thinking should I run away while I can???\nShould you???\n";}

    cin >> input;

    
    if (input == 1){
    cout << "You ran out of the doors as fast as you could\nWhile you were running\nYou failed to notice a rock sitting on the pathway\nYou tripped and fractured your skull\nYou bled out as you slowly expired away from life\nBad End\n";
    
    return 0;} // insert loop here somehow??

    else if (input == 2){
    cout << "Should I choose door 1, door 2, or door 3\n";}

    
    cin >> door;

    
    if (door == 3){{{
    cout << "You open the door and saw the void inside the door\n";}
        cout << "What door should i choose now?\n";}
        cin >> door;}
    
    
    if (door == 2){
    cout << "number 2 *Giggle*\nWrong choice said the voice\nYou died instantly\n";}
 
      
            
            
            if (door == 1){
    cout << "You open the door\nYou woke up and realized it wasn't real\nGood End\n";}
    
      
            
        if (door == 3){
                cout << "YOU FOOL said the voice\nThe whole Universe imploded\nSecret End\n";}
    
    
    
    
            cout << "Would you like to play again (y/n)\n";}
        cin >> goagain;

        } while (goagain == 'y' || goagain == 'Y'); // Some how loops the 3 doors good including going in the same door



    cout << "Made by brand175\nThanks for playing (:3)";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
