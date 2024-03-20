//  Known Limitations
//  4 Loops
//  Created on 2018-02-26.
//  brand175
//  Description: A collection of 6 simple programs

#include <iostream>
using namespace std;

int main() {
  
    int shape;
    int down;
    int userinput;
    int even;
    char goagain;
    float ScoreInput;
    float grademarkpercent;
    float Score;
    float math = 100;
    
    do{
    
        cout <<" Welcome to meh program :3\n";
        cout <<" Select a program (1) = Shapes  (2) = Bottles of beer  (3) = count down from 100  (4) = Even count down from 100  (5) = Song that never ends  (6) = Score Average \n";
    
        cin >> userinput;

    
        if (userinput == 1){

        
            for (int i=0; i < 15; i++){
                cout << i+1 << "   []\n";}
   
            cout << "Would you like to play again (y/n)\n";
        }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
   
else if (userinput == 2){
    
    for (int i=98; i > 2; i--){
        
        cout << i+1 << " bottles of beer on the wall, ";
        cout << i+1 << " bottles of beer\n";
        cout << "Take one down and pass it around, ";
        cout << i+0 << " bottles of beer on the wall.\n\n";}
    
    
    
    
    
    cout << "2 bottles of beer on the wall, 2 bottles of beer. Take one down and pass it around, 1 bottle of beer on the wall\n\n";
    
    cout << "1 bottle of beer on the wall, 1 bottle of beer. Take one down and pass it around, no more bottles of beer on the wall..\n\n";    // Another way to end it properly.
    
    
    cout << "Would you like to play again (y/n)\n";
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

else if (userinput == 3){
    
 
    for (int i=100; i > -1; i--){
        cout << i-0 << "\n";}
    
    
    cout << "Would you like to play again (y/n)\n";
}
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
else if (userinput == 4){

  
    for (int i=100; i > -2; i=i-2){
        cout << i+0 <<"\n";}
    
    
    cout << "Would you like to play again (y/n)\n";

}
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
else if (userinput == 5){
    
    
    for (int i=6; i > 2; i++){
        
    cout <<"This is the song that never ends, yes it goes on and on my friend. Some people started singing it, not knowing what it was, and they'll continue singing it forever just because...\n";}
    
    
    cout << "Would you like to play again (y/n)\n";
}
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
else if (userinput == 6){
    
    
    
                cout << "How many answers did you get right\n"; //1
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n"; //2
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n"; //3
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n"; //4
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n";  //5
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n";  //6
                
                
                cout << "How many answers did you get right\n";
                
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n";  //7
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n";  //8
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n"; //9
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                cout << "Next Test\n";  //10
                
                
                cout << "How many answers did you get right\n";
                
                cin >> Score;
                
                
                cout << "What was the number of answers on the test (in total)\n";
                
                cin >> ScoreInput;
                
                
                
                
                grademarkpercent = Score / ScoreInput * 100;
                
                
                
                
                cout << "The test average is out of " << Score << " and " << ScoreInput << ", your percent is: " << grademarkpercent;
                
                
                
            if (grademarkpercent >= 86 && grademarkpercent <= 100){
                    
                cout << " you got a A\n";
                    
                }
                
            else if (grademarkpercent >= 73 && grademarkpercent < 86){
                    
                    
                cout << " you got a B\n";
                    
                }
                
            else if (grademarkpercent >= 67 && grademarkpercent < 73){
                    
                cout << " you got a C+\n";
                    
                }
                
            else if (grademarkpercent >= 60 && grademarkpercent < 67){
                    
                cout << " you got a C\n";
                    
                }
                
            else if (grademarkpercent >= 50 && grademarkpercent < 60){
                    
                cout << " you got a C-\n";
                    
                }
                
            else if (grademarkpercent >= 0 && grademarkpercent < 50){
                    
                cout << " you failed/n"; }
                
    
                cout << "Would you like to play again (y/n)\n";}
        
                cin >> goagain;
    
       
        }  while (goagain == 'y' || goagain == 'Y');

           return 0;
                        }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
