#include <iostream>
using namespace std;
void dragon_hoard_intro();
void find_artifact();
void fantasy_storyline();
void scenario_1();
void left_route();

void fantasy_storyline(){
    char choice;
    cout << "“What platoon are you a part of? A or B?”" << endl;
    cout << "\tOption 1 - raiding a dragon hoard" << endl;
    cout << "\tOption 2 - finding artifact for great wizard" << endl;
    cout << "Which option do you choose (1/2)?";
    cin >> choice;
    switch(choice){
        case '1':
            cout << "The kingdom is facing an economic crisis. To solve this, the king has sent your platoon to raid a dragon hoard to bring back whatever riches could help the kingdom. You and your platoon set off on a journey and find the cavern where the dragon lives. You enter the cavern, and you have two options." << endl;
            scenario_1();
            break;            
        case '2':
            find_artifact();
            break;
        default:
            cout << "This is not proper input. Choose '1' or '2'";
            fantasy_storyline();
    }   
}


void find_artifact(){
    cout << "Jessie story";
}

void scenario_1(){
    char choice;
    cout << "Option 1: Go left" << endl;
    cout << "Option 2: Go right" << endl;
    cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch(choice){
    case '1':
   cout << "You and your platoon go in the left direction and encounter guards. They are not letting you and your platoon go inside. You have two options. " << endl;
   left_route();   
   break;
   case '2':
   cout << "You decide to venture down the path to the right, hoping it will lead you to the dragon's hoard. You come across a fork in the path. To the left, you see a dimly lit corridor, while to the right, there appears to be a faint glimmer of light." << endl;
   break;
   default:
   cout << "Invalid input. Please choose again." << endl;
   scenario_1();
  }
}
void left_route(){
    char choice;
    cin >> choice;
    cout << "Option 1: Negotiate" << endl;
    cout << "Option 2: Engage in combat" << endl;
    cout << "Which option do you choose (1/2)? ";
    switch (choice){
        case '1':
        cout << "You try to negotiate with the guards to let you in. One guard gives you a riddle that you need to solve to enter the cavern. The riddle is: “I do not have eyes, but once I did see. I once had thoughts, now white and empty.” What is the answer to the riddle: choice1 Skull, or choice2 A blind person’s eye." << endl;
        break;
        case '2':
        cout << "You have chosen combat. You decide that negotiation is not an option and opt to engage in combat with the guards.  Your platoon proves to be skilled warriors, and you swiftly gain the upper hand in the battle. You and your platoon defeat the guards, incapacitating them and clearing the way forward. You reach a fork in the path, with two possible routes to take" << endl;
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        left_route();
        
    }

}
