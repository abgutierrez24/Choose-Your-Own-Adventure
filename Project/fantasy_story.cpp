#include <iostream>
#include "fantasy_story.h"
#include "dragon_hoardStory.cpp" 
#include "Arkenstone.cpp"
using namespace std;


/*
This function lets the user choose
which platton they want to be part of.
It is the start of the fantasy storyline.
*/
void fantasy_storyline(){
    char choice;
    cout << "“What platoon are you a part of? 1 or 2?”" << endl;
    cout << "\tOption 1 - raiding a dragon hoard" << endl;
    cout << "\tOption 2 - finding artifact for great wizard" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case '1':
            cout << "The kingdom is facing an economic crisis. To solve this, the king has sent " << endl; 
            cout << "your platoon to raid a dragon hoard to bring back whatever riches could help " << endl;
            cout << "the kingdom. You and your platoon set off on a journey and find the cavern where " << endl;
            cout << "the dragon lives. You enter the cavern, and you have two options." << endl;
            scenario_1();
            break;            
        case '2':
            ArkenstoneStory();
            break;
        default:
            cout << "This is not proper input. Choose '1' or '2'";
            fantasy_storyline();
    }   
}

