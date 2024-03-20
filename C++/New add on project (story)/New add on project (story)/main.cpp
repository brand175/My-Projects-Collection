//
//  main.cpp
//  New add on project (story)
//  Description: Fiction story with a bonus maze game
//  Created on 2018-04-30.
//  Copyright © 2018 brand175. All rights reserved.
//  Known limitations: Can't end maze properly

    #include <iostream>

    using namespace std;

    int main()
{
    
    int  right = 'd';
    int  left  = 'a';
    int  up    = 'w';
    int  down  = 's';
    int  input;
    char path1;
    char input1;
    char input2;
    char input3;
    char input4;
    char input5;
    char input6;
    char input7;
    char input8;
    char input9;
    char input10;
    char Left  = 'l';
    char Right = 'r';
    
    //Note: only use 1 input per yes or no or it will affect the other yes or no's
    //Note: Most comments will be removed since these are just ideas to add to the story and make it whole
    
    int  Sword;
    int  run;
    char no   = 'n';
    char yes  = 'y';
    
    
    
    cout << "y and n is how you say no or yes\n\n";
    
    cout << "This is a text story based game.\n";
   
    cout << "Your goal is to complete the quest and *something else*\n\n";
    
    cout << "   Prelude??? (prob discard said things):\n\n";
   
    cout << "Your name is John Maylow\n";
    
    cout << "Born and raised in *some magical city/town name*\n";
    
    cout << "You are currently on a quest to *town or item*\n";
   
    cout << "Jason Malak fights along by your side\n\n";
    
    cout << "             A Heros beginning:\n\n\n";
    
    cout << "King Dawson: Your Father once fought by my side\n\n";
    
    cout << "King Dawson hands the Sword of *cool name* towards you in honor\n\n";
    
    cout << "Would you like to take it from him\n\n";
    
    cin  >> input1;
    
    
    if (input1 == yes)
{

    cout <<"\nJohn Maylow takes the Sword of *cool name* from King Dawson\n\n";
    
    cout << "King Dawson: I have a quest for you. A quest that your father failed to complete. Your quest to to search for the golden pearl which is to be in the cave of *cool name*. Your father never came back and nobody has seen him since that day\n\n";
    
    cout << "King Dawson: Are you up for the task John Maylow\n\n";
    
    cin  >> input2;
    
                    }
    
        
    else if (input1 == no)
{

    cout << "\nThe King looks at you\n\n";
    
    cout << "King Dawson: Really... Are you sure???\n\n";
    
    cout << "He said in a really confused voice\n\n";
    
    cin  >> input3;

                    }
    
    if (input3 == yes)
{
    
    cout << "\n2 monsters come barging through the door. All the kings guards are dead except one, Jason Malak. Everybody in the room panics. Jason came running down the steps and is now standing in front of King Dawson and John Maylow with his hands on his sword that is risen before him. Jason cuts 1 of the 2 remaining monsters head and it flew off and landed right in front of King Dawson. Jason couldn't stop looking at the Kings reaction. It was priceless. The remaining monster tore out Jasons intestines from his chest. He was paniking and trying to run away. He managed to get behind the king. Avenge me, Jason said as he falls to his knees and clapses to the ground. King Dawson bravely runs towards the monster. Just as he was about to strike the monster with the Sword of *cool name*. He took a mortal blow to the head causing him to fall down and become unconsious. John starts to panic. He grabs the Sword of *cool name* and runs away. As John was running up the castle stairs a dragon came bursting through the castle walls. John threw the Sword of *cool name* really high into the air. He froze in horror. 3 seconds later the Sword of *cool name* came blade down and peirced into Johns skull and all the way into his stomach. Johns eyes rolled back into his head and he fell down the stairs. King Dawson wakes up and saw Johns body right beside him with the sword still sticking out. King Dawson struggles to reach for the Sword of *cool name*. The dragon flew towards King Dawson and melted him to a crip. The town of *cool name* gets torched in flames. 6 hours later Jason was found but in critical condition. Bort Winstin (A surgical expertese) took Jason to *another cool town name* in his wagon. Jason lived to tell Bort the whole story including the kings reaction. But for poor Jason, he died before he got the the town of *cool name*\n\n    THE END\n\n";
    
                                                                                                            }
    
    
    else if (input3 == no)
{

    cout <<"John Maylow takes the Sword of *cool name* from King Dawson\n\n";
    
    cout << "King Dawson: I have a quest for you. A quest that your father failed to complete. Your quest to to search for the golden pearl which is to be in the cave of *cool name*. Your father never came back and nobody has seen him since that day\n\n";
    
    cout << "King Dawson: Are you up for the task John Maylow\n\n";
    
    cin  >> input4;
    
                    }
    
    
    if (input2 == yes || input4 == yes)
{
   
    // introduce Jason Malak
    
    // This line of code is after you accept the quest
    
    
    
    cout << "\nKing Dawson: I have a good swordsman. His name is Jason Malak. He shall fight along with you during your quest\n\n";
    
    cout << "King Dawson: JASSSOOONN\n\n";
    
    cout << "Jason runs down the steps\n\n";
    
    cout << "Jason Malak: What is it my king\n\n";
    
    cout << "King Dawson: This person who stands before you is *Johns father* son, John Maylow. I need you to go with John Maylow to the caves of *cool name*\n\n";
    
    cout << "Jason Malak: Isn't that the place where the golden pearl is???\n\n";
    
    cout << "King Dawson: Yes\n\n";
    
    cout << "Jason looks at the king nervously\n\n";
    
    cout << "Jason and John walks out of the castle. While in town. John noticed something strange about the old women in odd clothing. The 2nd time he turned around she wasn't there any more. John stopped and thought about it\n\n";
    
    cout << "Jason Malak: Why did you stop walking. We need to get to the caves before nightfall\n\n";
    
    cout << "John ignores the old women and discarded it as his eyes were playing tricks. They continue to walk\n\n";
    
    cout << "Jason starts to run\n\n";
    
    cout << "John Maylow: Slow down. We need to save our energy so we can make it to the caves in time\n\n";
    
    cout << "John and Jason see signs pointing in 2 directions\n\n";
    
    cout << " The sign with the left arrow is faded and not readable while the sign with the right arrow says Shourtcut two *cave name* \n\n";
    
    cout << "Jason starts continue walking to the right. While John is standing still\n\n";
    
    cout << "John Maylow: JASON\n\n";
    
    cout << "Jason stopped and faced towards John\n\n";
    
    cout << "Jason Malak: It's obvious that we need to go to the right because the sign says so\n\n";
    
    cout << "John Maylow: Doesn't the writing on that sign look odd. It's even spelled wrong\n\n";
    
    cout << "Jason Malak: Alright then. Where should we go\n\n";
    
    cout << "l is Left and r is Right\n\n";
    
    cin  >> path1;
    
                    }
    
    
    if (path1 == Left)
{

    cout << "Jason walks back towards John\n\n";
    
    cout << "Jason sighs and they walk to the left path\n\n";
    
    cout << "John Maylow: Hold Up\n\n";
    
    cout << "Jason Malak: No. You can just catch up to me\n\n";
    
    cout << "One of the trees start to fall over out of nowhere\n\n";

    cout << "John Maylow: LOOK OUT\n\n";
    
    cout << "Jason looks up to the falling tree\n\n";
    
    cout << "Jason Malak: Oh oh\n\n";
    
    cout << "Jason dies on impact from the hit\n\n";
    
    cout << "The old women that John saw in the town came out where the tree once stood\n\n";
    
    cout << "The Witch: What a pitty\n\n";
    
    cout << "John pulls out his sword\n\n";
    
    cout << "The Witch: You can't kill me\n\n";
    
    cout << "The sword flys out of Johns hands\n\n";
    
    cout << "John Maylow: MY SWORD\n\n";
    
    cout << "The Witch spawns 2 wolves\n\n";
    
    cout << "John freaks out\n\n";
    
    cout << "John starts to run\n\n";
    
    cout << "John trips and fell\n\n";
    
    cout << "John gets attacked\n\n";
    
    cout << "John dies\n\n            THE END\n\n\n";
    
                                                        }
    
    
    else if (path1 == Right)
{
    
    cout << "They continue to walk to the path thats off the roadside\n\n";
    
    cout << "Jason Malak: Theres the cave. I told you so\n\n";

    cout << "John Maylow: Yeah right\n\n";
    
    cout << "They walk into the cave. John turns around and saw that old women from earlier standing just in front of the enterance\n\n";

    cout << "John Maylow: I KNEW IT\n\n";

    cout << "Jason screamed like a little girl and turns towards John\n\n";
    
    cout << "Jason Malak: Ha ha very funny John... Whats wrong?\n\n";
    
    cout << "The old women snapped her fingers and the cave enterance colapsed\n\n"; // you see what i did there (:3)
    
    cout << "Jason Malak: Lets dig our selfs out\n\n";
    
    cout << "John Maylow: This is not the time to be fooling around here. How are we going to find the pearl now\n\n";

    cout << "Jason rolls his eyes\n\n";
    
    cout << "Jason accidenlty bumps into John\n\n";
    
    cout << "Johns sword falls out and stumbles around\n\n";
    
    cout << "John Maylow: Where did my sword go\n\n";
    
    cout << "Jason Malak: I don't know. Do you have match or something. I can't see very well\n\n";
    
    cout << "John Maylow: I thought you would bring something since caves are usually dark\n\n";
    
    cout << "Jason Malak: Forget about the light. Let's concentrate and find your sword\n\n";
    
    cout << "John takes five steps and tripped on his fallen sword\n\n";
    
    cout << "John Maylow: I FOUND MY SWORD\n\n";
    
    cout << "Jason Malak: SHHHH\n\n";
    
    cout << "*LOUD DISTANT ROARING*\n\n";
    
    cout << "Jason Malak: Well done John *Clap Emoji*\n\n";
    
    cout << "John wants to take his chances on digging the fallen rocks\n\n";
    
    cout << "Would you risk it\n\n";
    
    cin  >> input5;

                    }
    
    if (input5 == yes)
{
    
    cout << "\nJohn Maylow: Lets dig out the rocks\n\n";
    
    cout << "Jason Malak: Ok\n\n";
    
    cout << "Jason and John start digging out the rocks\n\n";
    
    cout << "They successfully made a way out. When John poked his head out he saw the Witch standing there with a grin\n\n";
    
    cout << "John quickly pulled out and ran the oppisite direction\n\n";
   
    cout << "John Maylow: THE WITCH IS HERE, RUN\n\n";
    
    cout << "Since the cave is now brighter. John has a plan. His plan is to lure the moster to the light since the cave is not fully lit and is still dark ahead and kill it with his sword\n\n";
    
    cout << "The Witch crawls through the hole\n\n";
    
    cout << "The Witch is now stuck\n\n";
    
    cout << "The Witch: AAAAHHHHHHHHH\n\n";
    
    cout << "John and Jason were lost. They couldn't see much anymore\n\n";
    
    cout << "Jason takes a few steps too far and fell 50 feet down\n\n";
    
    cout << "John Maylow: Jason are you ok\n\n";
    
    cout << "Jason Malak: I can't move. I think i broke my arms and legs but my back hurts like Hell but otherwise i'm fine\n\n";
    
    cout << "Little did they know. They are in the monsters den\n\n";
    
    cout << "Out of no where. The monster takes Jasons body and threw it right beside John\n\n";
    
    cout << "John Maylow: J..Jason are you still alive\n\n";
    
    cout << "He said in a whimper voice\n\n";
    
    cout << "Jasons mouth starts to stream with blood\n\n";

    cout << "John starts to cry\n\n";
    
    cout << "Jason Malak: I..Saw..The.Pearl\n\n";
    
    cout << "The Monster starts to run towards John\n\n";
    
    cout << "John ran and slipped on a rock. He did a roll and kept on running\n\n";
    
    cout << "John found his way back to the enterance of the cave\n\n";
    
    cout << "The Witch was still stuck\n\n";
    
    cout << "John Maylow: Where's the exit\n\n";
    
    cout << "He said out loud\n\n";
    
    cout << "The Witch: I'll kill you Johnny boy\n\n";
    
    cout << "John Maylow: You ugly fig. I'll mash you like a potato\n\n";  // I kept it PG. It actually sounds better
    
    cout << "John stabs the living crap out of the Witch with his sword\n\n";
    
    cout << "The whole cave clapses down on everybody. There were no survivers\n\n             THE END\n\n\n";

                                                                                                                }
    
    else if (input5 == no)
{
        
    cout << "John Maylow: Lets go kill this thing\n\n";
    
    cout << "John takes 3 steps forward and the cave enterance explode, making the cave extremely bright\n\n";
    
    cout << "The Witch: I'll kill both of you knuckle heads for trespassing\n\n";
    
    cout << "John Maylow: That explains the mis-spelled sign and the horrible font\n\n";
    
    cout << "The Witch: SHUT IT. I just had about enough of you\n\n";

    cout << "Little did she know. Jason was standing right next to the Witch\n\n";
    
    cout << "Jason cuts the Witch's head clean off\n\n";
    
    cout << "Jason Malak: That would look good if I hang that from my wall. I'll be known as *The Witch Hunter*\n\n";
    
    cout << "Jason screams and runs the oppiste direction\n\n";
    
    cout << "John runs and looks behind him\n\n";
    
    cout << "John Maylow: JASON YOU FOOL\n\n";
    
    cout << "Jason starts climbing a big tree and John starts to climb it too\n\n"; // This is the same tree that fell down
    
    cout << "John Maylow: This was a stupid idea\n\n";
    
    cout << "Jason Malak: What do you mean. The monster can't climb the tree\n\n";
    
    cout << "John Maylow: It's not about that. How are we going to kill it. We will be stuck here into we die\n\n";
    
    cout << "Jason Malak: Maybe if you swing your magical sword or something\n\n";
    
    cout << "John got his sword and swinged it\n\n";
    
    cout << "John Maylow: Oops\n\n";
    
    cout << "John lost his grip of the sword\n\n";
    
    cout << "Johns sword lands beside the monster\n\n";
    
    cout << "John Maylow: I'm never listening to you ever again\n\n";
    
    cout << "The wind starts to pick up\n\n";
    
    cout << "Jason Malak: I'm cold\n\n";
    
    cout << "John Maylow: I'm getting my sword back\n\n";
    
    cout << "John climbs down the tree\n\n";
    
    cout << "The tree snaps\n\n";
    
    cout << "Jason jumps over to the next tree\n\n";
    
    cout << "John holds on for his life\n\n";
    
    cout << "The tree crashes on the monster and knocks it out\n\n";
    
    cout << "John thumbles on the ground\n\n";
    
    cout << "He grabs the sword and cut the guts out of the monster\n\n";
    
    cout << "Something round came rolling out\n\n";
    
    cout << "John wipped it clean\n\n";
    
    cout << "John Maylow: IT'S THE PEARL\n\n";
    
    cout << "Jason climbs off the other tree\n\n";
    
    cout << "Johns hand was an inch away from the pearl when all of a sudden Jason grabbed the pearl\n\n";
    
    cout << "John Maylow: HEY\n\n";
    
    cout << "Jason Malak: I'll be king. I'll rule the world, MWAWAWAAHHH\n\n";
    
    cout << "John stabbed Jason right in the chest\n\n";
    
    cout << "Jason Malak: NOOOOOO. I'm supposed to be king. The next in line\n\n";
    
    cout << "Jason slams to the ground. The pearl rolls slightly to the left\n\n";
    
    cout << "John gets Jason's sword and stabs it into the open wound\n\n";
    
    cout << "John takes the pearl off the ground and cleans it off\n\n";
    
    cout << "John Maylow: Poor Jason. He's greed got to him\n\n";
    
    cout << "John walks back to the castle gates\n\n";
    
    cout << "Kings guard: John.. The king will be pleased... Wheres Jason?\n\n";
    
    cout << "John Maylow: There was a Witch. That ugly hag made Jason kill himself with his own sword\n\n";
    
    cout << "Kings guard: A Witch?\n\n";
    
    cout << "John Maylow: She followed us all the way to the caves\n\n";
    
    cout << "John goes into the castle doors\n\n";
    
    cout << "King Dawson: Your back already. Its only been 10 hours\n\n";
    
    cout << "John Maylow: I got the pearl\n\n";
    
    cout << "King Dawson: I see... Wheres Jason, he was my best swordsmen\n\n";
    
    cout << "John Maylow: There was a Witch and it killed Jason\n\n";
    
    cout << "King Dawson: A Witch?\n\n";
    
    cout << "John Maylow: Yes\n\n";
    
    cout << "John was a replacement for Jason and was honored to be in the next line for king\n\n";
    
    cout << "John made up Jasons death and told the story (modified) about his journey with Jason to the caves to retrive the golden pearl\n\n             THE END\n\n\n";
    
                                                        }
    
    

    // This line of code is for when you deny the quest
    
    
    
    else if (input2 == no || input4 == no)
{
    
    cout << "King Dawson: I understand\n\n";
    
    cout << "He said with a big sigh\n\n";

    cout << "One of the kings guards came running through the castle doors\n\n";

    cout << "King Dawson: What is it\n\n";
    
    cout << "He said in a troubled but stumbleing voice\n\n";

    cout << "Kings Guard: *John Maylows name* has arrived and he said that you had a quest for him. He's holding a pearl of some sort. Should I let him in\n\n";

    cout << "King Dawson: Bring him in\n\n";

    cout << "John was shocked. All these years he thought that his father got murdered by some Witch. I can't believe the King said he died. All of his men must of been slackers\n\n";

    cout << "*Johns fathers name* stands in the room with the king and John\n\n";
    
    cout << "John Maylow: Somethings not right\n\n";

    cout << "He said in a mysterious voice\n\n";

    cout << "Thats right said *Johns fathers name*\n\n";

    cout << "*Johns fathers name* molds and forms into a hidious looking person\n\n";
    
    cout << "King Dawson: IT'S A WITCH\n\n";
    
    cout << "The Witch: I indeed killed your father John Maylow\n\n";
    
    cout << "She said in her snoty little voice\n\n";
    
    cout << "John Maylow: You'll pay for that\n\n";
    
    cout << "The Witch: It's a pitty Johnny boy\n\n";

    cout << "The whole ground starts to shake\n\n";
    
    cout << "The Witch: Burn this kingdom to Hell. You will never make it out alive\n\n";

    cout << "You have the sudden erge to throw the sword of *cool name* at the Witch\n\n";

    cout << "Are you willing to take the risk\n\n";

    cin  >> input6;
    
                    }
    
    if (input6 == yes)
{
    
    cout << "\nJohn throws the sword of *cool name* towards the Witch. The real father of John Maylow runs into the room standing right behind the Witch\n\n";
    
    cout << "John Maylow: NOOO\n\n";

    cout << "The sword went right into the Witch's chest and peirced right into Johns fathers heart\n\n";

    cout << "The ground stops shaking\n\n";
    
    cout << "The emotion of John killing his own father made him faint\n\n";

    cout << "John fell through one of the cracks in the ground and landed 75 feet below the ground\n\n";

    cout << "King Dawson looks down into the hole\n\n";
    
    cout << "King Dawson: Are you all right John\n\n";

    cout << "No response was given\n\n";

    cout << "One of the many kings guard handed the golden pearl to King Dawson\n\n";
    
    cout << "Kings guard: *Johns father* handed this to me before he went into the castle\n\n";
    
    cout << "John Maylows death was a pittyfull one. John was now remebered as well as his father for saving the town from danger and bringing the golden pearl back\n\n           THE END\n\n\n";
    
                                                                                    }
    
    
    else if (input6 == no)
{
        
    cout << "\nThe Witch laughs\n\n";
    
    cout << "The Witch: I will finally have my revenge\n\n";
    
    cout << "Johns father enters the room\n\n";
    
    cout << "John is shocked. He didn't know what to do now\n\n";

    cout << "The Witch saw Johns reaction and she turned around\n\n";
    
    cout << "Johns father stabbed the Witch right in the head between the eyes\n\n";
 
    cout << "The ground stops shaking\n\n";
    
    cout << "The Witch falls into one of the cracks in the ground\n\n";

    cout << "King Dawson: I'm in your debt\n\n";
   
    cout << "Johns father hands over the golden pearl to King Dawson\n\n";
    
    cout << "King Dawson: *mubble* *mubble* *words of the unknown origin* The pearl explodes into confette\n\n";

    cout << "Brandon wakes up\n\n";
    
    cout << "The last 4 words to Happy Birthday were sang\n\n             THE END\n\n\n";
    
                                                                                            }
    
    
    
    cout << "You unlocked bonus content\n\nPress any button to continue\n\n";
        
        cin >> input7;
        

    if (input7)
{
        
        
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
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
        
    if (input7 == down)
{
            
            
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
        
        cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
        cin >> input7;
        
        if (input7 == right)
{
    
            
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
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
    
    if (input7 == up)
{
    
            
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
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
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
    cout << "|     |              O  |     |     |     |     |\n";
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
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |  O        |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |        O  |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                          O              |      \n";
    cout << "|_________________________________________|______\n";
            
            
                                                                    }
    
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                      O  |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == up)
{
            
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |        O  |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == left)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |  O        |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == up)
{
    
            
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
    cout << "      |                       |  O        |     |\n";
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
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
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
    cout << "      |                       |        O  |     |\n";
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
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
    
            
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
    cout << "|           |     |     |     |     |  O        |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
            
            
                                                                    }
        
    else if (input7 == up)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |           |\n";
    cout << "|     ___________________           |           |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |     ______|___________|     |\n";
    cout << "|           |     |                       |     |\n";
    cout << "|           |     |                    O  |     |\n";
    cout << "|___________|     |__________________     |     |\n";
    cout << "      |                       |           |     |\n";
    cout << "      |                       |           |     |\n";
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
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
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
    cout << "|           |     |     |     |     |        O  |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    else if (input7 == left)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |           |\n";
    cout << "|     ___________________           |           |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |     ______|___________|     |\n";
    cout << "|           |     |                       |     |\n";
    cout << "|           |     |  O                    |     |\n";
    cout << "|___________|     |__________________     |     |\n";
    cout << "      |                       |           |     |\n";
    cout << "      |                       |           |     |\n";
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
    
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |  O   \n";
    cout << "|_________________________________________|______\n";
    
            
    cout << "You Win\n";
            
                                                                    }
        
        
    if (input7 == up)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |           |\n";
    cout << "|     ___________________           |           |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |  O        |           |     |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
            
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |           |\n";
    cout << "|     ___________________           |           |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |        O  |           |     |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == up)
{
            
    
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                          O        |           |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                O  |           |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }

        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
    
    cin >> input7;
        
    if (input7 == down)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |           |\n";
    cout << "|     ___________________           |           |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |           |  O        |     |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |           |\n";
    cout << "|     ___________________           |           |\n";
    cout << "|     |           |           |           |     |\n";
    cout << "|     |           |           |        O  |     |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == up)
{
    
            
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |  O        |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
    
    
    cout << "_________________________________________________\n";
    cout << "|                                   |           |\n";
    cout << "|                                   |        O  |\n";
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
            
    
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
    cout << "|           |     |     |     |     |        O  |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
        
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
    
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |  O   \n";
    cout << "|_________________________________________|______\n";
    
    cout << "You Win\n";
            return 0;
                        }
        
    
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == right)
{
            
    
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
    cout << "|           |     |     |     |     |        O  |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |      \n";
    cout << "|_________________________________________|______\n";
    
            
                                                                    }
        
       
    cout <<"\nw is up,  d is right,  a is left,  s is down\n\n";
        
    cin >> input7;
        
    if (input7 == down)
{
            
            
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
    cout << "|           |     |     |     |     |           |\n";
    cout << "|___________|     |     |_____|     |______     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|                 |           |           |     |\n";
    cout << "|     ____________|______     |______     |     |\n";
    cout << "|                                         |      \n";
    cout << "|                                         |  O   \n";
    cout << "|_________________________________________|______\n";
    
            
    cout << "You Win\n";
            
            
                        }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
                }
