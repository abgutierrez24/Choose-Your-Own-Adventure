#include <ios>
#include <iostream>
using namespace std;
void dragon_hoard_intro();
void find_artifact();
void fantasy_storyline();
void scenario_1();
void left_route();
void negotiate_route1();
void combat_guardsRoute();
void negotiate_route2();
void right_route();
void boulder_route();
void monsters_route();
void traps_route();



void fantasy_storyline(){
    char choice;
    cout << "“What platoon are you a part of? 1 or 2?”" << endl;
    cout << "\tOption 1 - raiding a dragon hoard" << endl;
    cout << "\tOption 2 - finding artifact for great wizard" << endl;
    cout << "Which option do you choose (1/2)? ";
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
    cout << "\tOption 1: Go left" << endl;
    cout << "\tOption 2: Go right" << endl;
    cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch(choice){
    case '1':
   cout << "You and your platoon go in the left direction and encounter guards. They are not letting you and your platoon go inside. You have two options. " << endl;
   left_route();   
   break;
   case '2':
   cout << "You decide to venture down the path to the right, hoping it will lead you to the dragon's hoard. You come across a fork in the path. To the left, you see a dimly lit corridor, while to the right, there appears to be a faint glimmer of light. Which path do you chooose?" << endl;
   right_route();
   break;
   default:
   cout << "Invalid input. Please choose again." << endl;
   scenario_1();
  }
}
void left_route(){
    char choice;
    cout << "\tOption 1: Negotiate" << endl;
    cout << "\tOption 2: Engage in combat" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch (choice){
        case '1':
        cout << "You try to negotiate with the guards to let you in. One guard gives you a riddle that you need to solve to enter the cavern. The riddle is: “I do not have eyes, but once I did see. I once had thoughts, now white and empty.” What is the answer to the riddle: choice1 Skull, or choice2 A blind person’s eye." << endl;
        negotiate_route1();
        break;
        case '2':
        cout << "You have chosen combat. You decide that negotiation is not an option and opt to engage in combat with the guards.  Your platoon proves to be skilled warriors, and you swiftly gain the upper hand in the battle. You and your platoon defeat the guards, incapacitating them and clearing the way forward. You reach a fork in the path, with two possible routes to take." << endl;
        combat_guardsRoute();
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        left_route();
        
    }

}
void negotiate_route1(){
    char choice;
    cout << "\tOption 1: Skull." << endl;
    cout << "\tOption 2: A blind person's eye." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch(choice){
        case '1':
        cout << "The guard shakes his head. 'Sorry, that's incorrect. You may not pass.' You and your platoon are forced to retreat from the cavern, empty-handed." << endl;
        break;
        case '2':
        cout << "The guard nods in approval. 'Correct! You may enter.' With the riddle solved, the guards step aside, allowing you and your platoon to enter the cavern." << endl;
        cout << endl;
        cout << "As you enter the cavern, you are immediately enveloped in darkness. Your platoon light torches to illuminate the surroundings, revealing a vast underground chamber filled with glittering treasures. However, you notice movement in the shadows. A group of ferocious creatures, guardians of the dragon hoard, emerge from the darkness, ready to defend their treasure at all costs. Now faced with a new challenge, you must make a quick decision" << endl;
        negotiate_route2();
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        negotiate_route1();
        

    }
    
}
void negotiate_route2(){
    char choice;
    cout << "\tOption 1: Fight the creatures." << endl;
    cout << "\tOption 2: Retreat." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch (choice){
        case '1':
            cout << "You and your platoon decide to engage the creatures in combat, determined to claim the dragon hoard. With weapons drawn, you charge into battle. Despite the ferocity of the creatures, your bravery and teamwork prevail. You defeat the creatures and reach the heart of the dragon hoard. You and your platoon make the journey back to the kingdom, triumphant and full with riches. You have succeeded! ";
        break;
        case '2':
            cout << "Realizing the formidable strength of the creatures, you choose to retreat. You and your platoon back away slowly, carefully avoiding confrontation. The mission to secure the dragon hoard has failed, and the kingdom's economic crisis remains unresolved.";
        break;
        default:
            cout << "Invalid input. Please choose again" << endl;
            negotiate_route2();
    }
}

void combat_guardsRoute(){
    char choice;
    cout << "\tOption 1: A steep staircase leading upwards." << endl;
    cout << "\tOption 2: A narrow bridge spanning a chasm below." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch (choice){
        case '1':
        cout << "You choose to ascend the steep staircase, leading your platoon upward into the unknown. The climb is arduous, but your determination carries you forward. Eventually, you reach the top and find yourselves in a hidden chamber filled with untold riches. Success is yours for the taking." << endl;
        break;
        case '2':
        cout << " You go on the narrow bridge spanning the chasm below. However, disaster strikes as the bridge gives way beneath your feet, sending you and your platoon plummeting into the darkness below. Your mission ends in failure."  << endl;
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        combat_guardsRoute();
    }
}

void right_route(){
char choice;
    cout << "\tOption 1: Left" << endl;
    cout << "\tOption 2: Right" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch(choice){
        case '1':
        cout << "You go to explore the left corridor, hoping it will lead you to the dragon's lair. As you venture deeper into the darkness, the passage narrows, and you find yourself navigating through a labyrinth of twists and turns. Suddenly, you hear a rumbling noise from up ahead. You and your platoon spot a massive boulder blocking the path." << endl;
        boulder_route();
        break;
        case '2':
        cout << "Curious about the faint glimmer of light, you choose to explore the right corridor. As you venture deeper into the cavern, the light grows brighter, illuminating your path. Suddenly, you come face to face with a massive dragon guarding its hoard. The beast roars in fury, its eyes gleaming with malice." << endl;
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        right_route();
        
    }
}
void boulder_route(){
    char choice;
    cout << "\tOption 1: Move the boulder." << endl;
    cout << "\tOption 2: Find an alternate route." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch(choice){
        case '1':
        cout << "You and your platoon muster all your strength and attempt to move the boulder blocking the path. You manage to move the massive rock, clearing the way forward.  However, another challenge seems to appear. Continuing down the corridor, you see a group of fierce looking monsters, blocking the path forward." << endl;
        monsters_route();
        break;
        case '2':
        cout << "Realizing that the boulder is too heavy to move, you decide to backtrack and search for an alternate route. After exploring several side passages, you eventually find a hidden tunnel that bypasses the obstruction. Following the tunnel, you emerge into the dragon's lair. You quickly fill your bags with as much treasure as they can hold before making your way back to the surface, victorious." << endl;
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        boulder_route();
    }  
}
void monsters_route(){
    char choice;
    cout << "\tOption 1: Engage in combat" << endl;
    cout << "\tOption 2: Use stealth" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch(choice){
        case '1':
        cout << "You and your platoon draw your weapons and prepare to face the monsters head-on. A fierce battle ensues, with swords clashing and spells flying. Unfortunately, you were defeated as a lot of men were tired from moving the boulder." << endl;
        break;
        case '2':
        cout << "You signal to your platoon to remain silent as you carefully navigate around the monsters, using the shadows to conceal your movements. You and your platoon manage to bypass the monsters undetected, silently slipping past them and continuing down the corridor. As you move forward, you encounter a series of traps set to deter intruders." << endl;
        traps_route();
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        monsters_route();
    }
}
void traps_route(){
    char choice;
    cout << "\tOption 1: Disarm the traps" << endl;
    cout << "\tOption 2: Find a way to bypass them" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    switch(choice){
        case '1':
        cout << "Recognizing the danger posed by the traps, you and your platoon carefully disarm them one by one. With patience and caution, you successfully neutralize the traps, clearing the way forward. Pressing onward, you finally reach the dragon's lair. Inside, you discover a vast hoard of treasure, gleaming in the dim light. Success! You gather as much treasure as you can carry and make your way back to the surface, triumphant." << endl;
        break;
        case '2':
        cout << "Instead of risking direct confrontation with the traps, you and your platoon find an alternate route to bypass them. You navigate through hidden passageways and secret tunnels, avoiding the traps altogether. However, soon you find yourselves hopelessly lost in the maze of passages. It results in you and your platoon failing the mission. " << endl;
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        traps_route();       
    }

}