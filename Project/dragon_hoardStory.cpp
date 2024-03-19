#include <iostream>
#include "dragon_hoardStory.h"
#include "ArkenstoneFunctions.h"
using namespace std;
/*
This is the first set of options in the 
dragon hoard story presented in the scenario_1 function
Every option the user chooses takes them to a different scenario.
Switch statements are used to check the user input and take them 
to the correct route of the story.
The default in the switch statement repeats the function if 
the user input is not correct.
*/ 
void scenario_1(){
    char choice;
    starbar();
    cout << "\tOption 1: Go left" << endl;
    cout << "\tOption 2: Go right" << endl;
    cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch(choice){
    // If user chooses option 1, it takes them to left route.
    case '1':
   cout << "You and your platoon go in the left direction and encounter guards. They " << endl;
   cout << "are not letting you and your platoon go inside. You have two options. " << endl;
   left_route();   
   break;
   case '2':
   // If user chooses option 2, it takes them to right route.
   cout << "You decide to venture down the path to the right, hoping it will lead you to " <<  endl;
   cout << "the dragon's hoard. You come across a fork in the path. To the left, you see a " << endl;
   cout << "dimly lit corridor, while to the right, there appears to be a faint glimmer of light. " << endl; 
   cout << "Which path do you chooose?" << endl;
   right_route();
   break;
   default:
   cout << "Invalid input. Please choose again." << endl;
   scenario_1();
  }
}

/*
The left_route function is called when the user decides to 
go in the left which was presented in the scenario_1 function.
It gives the user two more choices to unveil the storyline.
*/
void left_route(){
    char choice;
    starbar();
    cout << "\tOption 1: Negotiate" << endl;
    cout << "\tOption 2: Engage in combat" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch (choice){
        case '1':
        // If the user chooses negotiate, it takes the them to the negotiate_route 1 function.
        cout << "You try to negotiate with the guards to let you in. One guard gives you a riddle " << endl;
        cout << "that you need to solve to enter the cavern. The riddle is: “I do not have eyes, " << endl;
        cout <<"but once I did see. I once had thoughts, now white and empty.” What is the answer " << endl;
        cout << "to the riddle: " << endl;
        negotiate_route1();
        break;
        case '2':
        // If the user chooses combat, it takes them to the combat_gaurdsRoute funciton.
        cout << "You have chosen combat. You decide that negotiation is not an option and decide to " << endl;
        cout << "engage in combat with the guards.  Your platoon proves to be skilled warriors, and you " << endl;
        cout << "swiftly gain the upper hand in the battle. You and your platoon defeat the guards, " << endl;
        cout << "incapacitating them and clearing the way forward. You reach a fork in the path, with " << endl;
        cout << "two possible routes to take." << endl;
        combat_guardsRoute();
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        left_route();
        
    }

}

/*
The negotiate_route1 function is called when the user chooses the option to 
negotiate, which was presented in the left_route function. This function 
presents two more options to the user.
*/
void negotiate_route1(){
    char choice;
    starbar();
    cout << "\tOption 1: Skull." << endl;
    cout << "\tOption 2: A blind person's eye." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        case '1':
        // If user chooses option 1, the story stops as it is the wrong answer.
        cout << "The guard shakes his head. 'Sorry, that's incorrect. You may not pass.' You and your " << endl;
        cout << "platoon are forced to retreat from the cavern, empty-handed. You failed." << endl;
        break;
        case '2':
        //The correct answer results in the continuation of the story.
        cout << "The guard nods in approval. 'Correct! You may enter.' With the riddle solved, the " << endl;
        cout << "guards step aside, allowing you and your platoon to enter the cavern." << endl;
        cout << endl;
        cout << "As you enter the cavern, you are immediately enveloped in darkness. Your platoon light " << endl;
        cout << "torches to illuminate the surroundings, revealing a vast underground chamber filled with " << endl;
        cout << "glittering treasures. However, you notice movement in the shadows. A group of ferocious " << endl;
        cout << "creatures, guardians of the dragon hoard, emerge from the darkness, ready to defend their " << endl;
        cout <<"treasure at all costs. Now faced with a new challenge, you must make a quick decision" << endl;
        negotiate_route2();
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        negotiate_route1();
        

    }
    
}

/*
The negotiate_route2() function is the continuing part of the story from 
negotiate_route1 function. It's a part 2.
*/
void negotiate_route2(){
    char choice;
    starbar();
    cout << "\tOption 1: Fight the creatures." << endl;
    cout << "\tOption 2: Retreat." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch (choice){
        case '1':
        // If the user chooses option 1, they succeed in the mission.
            cout << "You and your platoon decide to engage the creatures in combat, determined to claim " << endl;
            cout <<" the dragon hoard. With weapons drawn, you charge into battle. Despite the ferocity " << endl;
            cout << "of the creatures, your bravery and teamwork prevail. You defeat the creatures and " << endl;
            cout <<"reach the heart of the dragon hoard. You and your platoon make the journey back to " << endl;
            cout <<"the kingdom, triumphant and full with riches. You have succeeded! " << endl;
        break;
        case '2':
        // If the user chooses option 2, they fail the mission.
            cout << "Realizing the formidable strength of the creatures, you choose to retreat. You and " << endl;
            cout << "your platoon back away slowly, carefully avoiding confrontation. The mission to " << endl;
            cout << "secure the dragon hoard has failed, and the kingdom's economic crisis remains unresolved." << endl;
        break;
        default:
            cout << "Invalid input. Please choose again" << endl;
            negotiate_route2();
    }
}
/*
The combat_guardsRoute() combat is called if the user decides to combat the guards,
which is presented in the left_route() function.
*/
void combat_guardsRoute(){
    char choice;
    starbar();
    cout << "\tOption 1: A steep staircase leading upwards." << endl;
    cout << "\tOption 2: A narrow bridge spanning a chasm below." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch (choice){
        // If the user chooses option 1, they succeed in the mission.
        case '1':
        cout << "You choose to ascend the steep staircase, leading your platoon upward into the unknown. " << endl;
        cout << "The climb is arduous, but your determination carries you forward. Eventually, you reach " << endl;
        cout << "the top and find yourselves in a hidden chamber filled with untold riches. Success is yours " << endl;
        cout << "for the taking." << endl;
        break;
        case '2':
        // If the user chooses option 2, they fail the mission.
        cout << " You go on the narrow bridge spanning the chasm below. However, disaster strikes as the " << endl;
        cout << "bridge gives way beneath your feet, sending you and your platoon plummeting into the darkness " << endl;
        cout << "below. Your mission ends in failure." << endl;
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        combat_guardsRoute();
    }
}

/*
The right_route() function is called when the user selects the right option
in the scenario_1 function. It presents the user two options
to continue the story.
*/
void right_route(){
    char choice;
    starbar();
    cout << "\tOption 1: Left" << endl;
    cout << "\tOption 2: Right" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        // If the user chooses option 1, it takes the user to the boulder route.
        case '1':
        cout << "You go to explore the left corridor, hoping it will lead you to the dragon's lair. " << endl;
        cout << "As you venture deeper into the darkness, the passage narrows, and you find yourself " << endl;
        cout << "navigating through a labyrinth of twists and turns. Suddenly, you hear a rumbling " << endl;
        cout << "noise from up ahead. You and your platoon spot a massive boulder blocking the path." << endl;
        boulder_route();
        break;
        case '2':
        // If the user chooses option 1, it takes the user to the encounter dragon route.
        cout << "Curious about the faint glimmer of light, you choose to explore the right corridor. " << endl;
        cout << "As you venture deeper into the cavern, the light grows brighter, illuminating your path. " << endl;
        cout << "Suddenly, you come face to face with a massive dragon guarding its hoard. The beast roars " << endl;
        cout << "in fury, its eyes gleaming with malice." << endl;
        encounter_dragonRoute();
        break;
        default:
        cout << "Invalid input. Please choose again" << endl;
        right_route();
        
    }
}


/*
The encounter_dragooRoute() function is called when
the user selects option 2 in right_route() function.
*/
void encounter_dragonRoute(){
    char choice;
    starbar();
    cout << "\tOption 1: Attempt to reason with the dragon" << endl;
    cout << "\tOption 2: Engage it in combat" << endl; 
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        // If user selects option 1, they succeed.
        case '1': 
        cout << "You step forward and try to reason with the dragon, explaining that you mean no harm " << endl;
        cout << "and only seek to retrieve some of its treasure to help your kingdom. Surprisingly, the " << endl;
        cout << "dragon listens to your plea and agrees to let you take a portion of its hoard. Grateful " << endl;
        cout << "for the dragon's generosity, you gather as much treasure as you can carry before bidding " << endl;
        cout << "the creature farewell and making your way back to the surface. You have succeeded! " << endl;
        break;
        case '2':
        // If the user selects option 2, they are defeated.
        cout << "You draw your weapons and prepare to do battle with the dragon. The creature lunges at " << endl;
        cout << "you with claws and teeth bared, and a fierce struggle ensues. Despite your best efforts, " << endl;
        cout << "the dragon proves to be a formidable opponent. With wounds mounting and your platoon " << endl;
        cout << "suffering casualties, you realize that victory is unlikely. In a last-ditch effort to " << endl;
        cout << "save yourself and your remaining comrades, you retreat from the cavern, defeated." << endl;
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        encounter_dragonRoute();        
    }
 
}
/*
The boulder_route() function is called when the user
chooses option 1 in the right_route() function.
*/
void boulder_route(){
    char choice;
    starbar();
    cout << "\tOption 1: Move the boulder." << endl;
    cout << "\tOption 2: Find an alternate route." << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        // If the user picks option 1, it takes them to the monsters route.
        case '1':
        cout << "You and your platoon muster all your strength and attempt to move the boulder blocking " << endl;
        cout << "the path. You manage to move the massive rock, clearing the way forward.  However, another " << endl;
        cout << "challenge seems to appear. Continuing down the corridor, you see a group of fierce looking " << endl;
        cout << "monsters, blocking the path forward." << endl;
        monsters_route();
        break;
        case '2':
        // If the user picks option 2, they find the treasure and succeed.
        cout << "Realizing that the boulder is too heavy to move, you decide to backtrack and search for " << endl;
        cout << "an alternate route. After exploring several side passages, you eventually find a hidden " << endl;
        cout << "tunnel that bypasses the obstruction. Following the tunnel, you emerge into the dragon's lair. " << endl;
        cout << "You quickly fill your bags with as much treasure as they can hold before making your way back " << endl;
        cout << "to the surface, victorious." << endl;
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        boulder_route();
    }  
}

/*
The monster_route() function is called when the user
chooses option 1 in the boulder_route() function
*/
void monsters_route(){
    char choice;
    starbar();    
    cout << "\tOption 1: Engage in combat" << endl;
    cout << "\tOption 2: Use stealth" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        // If user chooses option 1, they are defeated.
        case '1':
        cout << "You and your platoon draw your weapons and prepare to face the monsters head-on. A fierce " << endl;
        cout << "battle ensues, with swords clashing and spells flying. Unfortunately, you were defeated as a " << endl;
        cout << "lot of men were tired from moving the boulder." << endl;
        break;
        case '2':
        // If user chooses option 2, it takes them to the traps route.
        cout << "You signal to your platoon to remain silent as you carefully navigate around the monsters, " << endl;
        cout << "using the shadows to conceal your movements. You and your platoon manage to bypass the monsters "<< endl;cout << "undetected, silently slipping past them and continuing down the corridor. As you move forward, " << endl;
        cout << "you encounter a series of traps set to deter intruders." << endl;
        traps_route();
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        monsters_route();
    }
}

/*
The traps_route() function is called when
the user chooses option 2 in the monster_route() function.
*/
void traps_route(){
    char choice;
    starbar(); 
    cout << "\tOption 1: Disarm the traps" << endl;
    cout << "\tOption 2: Find a way to bypass them" << endl;
    cout << "Which option do you choose (1/2)? ";
    cin >> choice;
    cout << endl;
    switch(choice){
        // If user chooses option 1, then the user succeeds in the mission.
        case '1':
        cout << "Recognizing the danger posed by the traps, you and your platoon carefully disarm them " << endl;
        cout << "one by one. With patience and caution, you successfully neutralize the traps, clearing " << endl;
        cout << "the way forward. Pressing onward, you finally reach the dragon's lair. Inside, you discover " << endl;
        cout << "a vast hoard of treasure, gleaming in the dim light. Success! You gather as much treasure as " << endl;
        cout << "you can carry and make your way back to the surface, triumphant." << endl;
        break;
        case '2':
        // If user chooses option 2, the user fails the mission.        
        cout << "Instead of risking direct confrontation with the traps, you and your platoon find an alternate " << endl;cout << "route to bypass them. You navigate through hidden passageways and secret tunnels, avoiding the " << endl;
        cout << "traps altogether. However, soon you find yourselves hopelessly lost in the maze of passages. It " << endl;
        cout << "results in you and your platoon failing the mission. " << endl;
        break;
        default:
        cout << "Invalid input. Please choose again." << endl;
        traps_route();       
    }
}