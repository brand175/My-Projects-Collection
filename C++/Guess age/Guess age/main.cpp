//
//  Guess my age
//  Copyright © 2018 brand175. All rights reserved.
//  Created on 2018-02-13
//  Known Limitations
//  Description

#include <iostream>

    int main(){
    using namespace std;
  
    float age = 18; //my age
   
    cout << "guess my age bud\n";
    cin >> age;
    
    if (age == 18) {
    cout << "Wow you did it\n";
        
    }
    
    
    else if (age <= 18 ) {
    cout <<"guess higher\n";
   
    }
    
        
    else if (age >= 18) {
    cout << "guess lower\n"; // Found out that using age > maxage has no effect but age == 18 does.
        
   
    }
    
    if (age >= 25) { // 25 and above create's are you crazy, but is still says guess lower (which i don't want, but it's needed)
    cout << "Are you crazy???\n";
   
    }

    
    return 0;
  
    }
