//  Known Limitations
//  Description: A program that calcuates you test score into a percent grade
//  Grade Calculator
//  Created on 2018-02-19.
//  Copyright © 2018 brand175. All rights reserved.


#include <iostream>
using namespace std;

int main() {
  
    char operation;
    float UserInput;
    float ScoreInput;
    float grademarkpercent;
    float Score;
    float math = 100;
    float Divide = '/';
    
   // Excellent = 86 >= 100
   // Very_Good = 73 >= 85
   // Good = 67 >= 72
   // Satisfactory = 60 >= 66
   // Minamally_Acceptable = 50 >= 59
   // Failure = 49 >= 0
    
   
   // Input of right answers you got from the test
    
   cout << "How many answers did you get right\n";
   
   cin >> Score;
    

   // Input of how many answers are in the test (in-total)

    cout << "What was the number of answers on the test (in total)\n";
    
    cin >> ScoreInput;

    grademarkpercent = Score / ScoreInput * 100;
    
    
    cout << "ready\n";

    
    // Calculates the score and gives a percent
    
    cout << "The test is out of " << Score << " and " << ScoreInput << ", your percent is: " << grademarkpercent;
       
       
    // Calculates the grade A
    
    
    if (grademarkpercent >= 86 && grademarkpercent <= 100){

           cout << " you got a A\n";
       
    }
       
    // Calculates the grade B
    
    else if (grademarkpercent >= 73 && grademarkpercent < 86){
       
               
           cout << " you got a B\n";
    
    }
    
    // Calculates the grade C+
    
    else if (grademarkpercent >= 67 && grademarkpercent < 73){

           cout << " you got a C+\n";
        
    }
   
    // Calculates the grade C
    
    else if (grademarkpercent >= 60 && grademarkpercent < 67){
       
           cout << " you got a C\n";
   
    }

    // Calculates the grade C-
    
    else if (grademarkpercent >= 50 && grademarkpercent < 60){
        
           cout << " you got a C-\n";
  
    }
    
    // Calculates the grade F
    
    else if (grademarkpercent >= 0 && grademarkpercent < 50){
    
    cout << " you failed/n";
    

        
    
    
    
    
    
    
    
    
    
    
    
                

   }
 return 0;
}
