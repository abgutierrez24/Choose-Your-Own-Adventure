#include <iostream>
using namespace std;
void dragon_hoard();
void find_artifact();

void choiceLeft();
void choiceLeftNegotiate(); 
void choiceLeftCombat();
void choiceLeftStaircase();
void choiceLeftBridge();
void choiceLeftSkull();
void choiceLeftBlindEye();
void choiceLeftRetreat();
void choiceLeftFight();

void choiceRight();
void choiceRightCorridor();
void choiceLeftCorridor();
void moveBoulder();
void engageMonsters();
void useStealth();
void disarmTraps();
void bypassTraps();
void findAlternateRoute();
void encounterDragon();
void reasonWithDragon();
void engageDragon();



void fantasy_story(){
    char choice;
    cout<< "You are asked to try a new video game at your friend’s house. As soon as you boot the game up, you find yourself inside the game itself. You have no idea how you got there. You cannot find your friend. You find yourself in the armory of a castle. Everyone around you is putting on armor and gathering weapons. Someone taps you on the shoulder and tells you to put on the armor and to get a weapon. “What platoon are you a part of? A or B?” "<< endl;
    cout << "\tOption A - raiding a dragon hoard" << endl;
    cout << "\tOption B - finding artifact for great wizard" << endl;
    cout << "Choose 'A' or 'B'" << endl;
    cin >> choice;
    switch(choice){
        case 'A':
            dragon_hoard();
        case 'B':
            find_artifact();
        default:
            cout << "This is not proper input. Choose '1' or '2'";
    }   
    
}

void dragon_hoard(){
 char choice;    
 cout << "The kingdom is facing an economic crisis. To solve this, the king has sent your platoon to raid a dragon hoard to bring back whatever riches could help the kingdom. You and your platoon set off on a journey and find the cavern where the dragon lives. You enter the cavern, and you have two options. Go left or right:"<< endl;
 cout<< "What would you like to do?" << endl;
 cout << "\tEnter '1' to go left" << endl;
 cout << "\tEneter '2' to go right" << endl;
 if (choice == '1'){
    choiceLeft();    
 } else if (choice == '2') {
    choiceRight();
 } else {
    cout << "Invalid input" << endl;
 }
 
}

void choiceLeft(){
char choice;
cout << "You and your platoon go in the left direction and encounter guards. They are not letting you and your platoon go inside. You have two options. 1 Negotiate, or 2 use combat. " << endl;
cout << "\tEnter '1' to negotiate." << endl;
cout << "\tEnter '2' to go right." << endl;
}

void choiceLeftNegotiate(){
cout << "You try to negotiate with the guards to let you in. One guard gives you a riddle that you need to solve to enter the cavern. The riddle is: “I do not have eyes, but once I did see. I once had thoughts, now white and empty.” What is the answer to the riddle: choice1 Skull, or choice2 A blind person’s eye." << endl;
}

void choiceLeftBlindEye(){
cout << "The guard nods in approval. 'Correct! You may enter.' With the riddle solved, the guards step aside, allowing you and your platoon to enter the cavern." << endl;
cout << endl;
cout << endl;
 cout << "As you enter the cavern, you are immediately enveloped in darkness. Your platoon light torches to illuminate the surroundings, revealing a vast underground chamber filled with glittering treasures. However, you notice movement in the shadows. A group of ferocious creatures, guardians of the dragon hoard, emerge from the darkness, ready to defend their treasure at all costs. Now faced with a new challenge, you must make a quick decision: choice 1 fight the creatures, or choice 2 retreat." << endl;
}

void choiceLeftFight(){
cout << "You and your platoon decide to engage the creatures in combat, determined to claim the dragon hoard. With weapons drawn, you charge into battle. You defeat the creatures and reach the heart of the dragon hoard. Your platoon fills their bags with as much treasure as they can carry, knowing that this wealth will bring prosperity to the kingdom. You and your platoon make the journey back to the kingdom, triumphant and laden with riches. You successfully complete the mission." << endl;
}

void choiceLeftRetreat(){
cout << "Realizing the formidable strength of the creatures, you choose to retreat. You and your platoon back away slowly, carefully avoiding confrontation. The mission to secure the dragon hoard has failed, and the kingdom's economic crisis remains unresolved." << endl; 
}
void choiceLeftCombat(){
cout << "You have chosen combat. You decide that negotiation is not an option and opt to engage in combat with the guards.  Your platoon proves to be skilled warriors, and you swiftly gain the upper hand in the battle. You and your platoon defeat the guards, incapacitating them and clearing the way forward. You reach a fork in the path, with two possible routes to take: a steep staircase leading upwards or a narrow bridge spanning a chasm below. " << endl;
}

void choiceLeftStaircase(){
    cout << "You choose to ascend the steep staircase, leading your platoon upward into the unknown. The climb is arduous, but your determination carries you forward. Eventually, you reach the top and find yourselves in a hidden chamber filled with untold riches. Success is yours for the taking. " << endl;
}
void choiceLeftBridge(){
cout <<"You go on the narrow bridge spanning the chasm below. The path is perilous, with each step threatening to send you tumbling into the abyss. Despite the danger, you press on, your courage driving you forward. However, disaster strikes as the bridge gives way beneath your feet, sending you and your platoon plummeting into the darkness below. Your mission ends in failure." << endl;
}
void choiceRight() {
 cout << "You decide to venture down the path to the right, hoping it will lead you to the dragon's hoard. You come across a fork in the path. To the left, you see a dimly lit corridor, while to the right, there appears to be a faint glimmer of light." << endl;
 cout << "Enter '1' to go left" << endl;
 cout << "Enter '2' to go right" << endl; 
}
void choiceRightCorridor(){
    cout << "Curious about the faint glimmer of light, you choose to explore the right corridor. As you venture deeper into the cavern, the light grows brighter, illuminating your path. Suddenly, you come face to face with a massive dragon guarding its hoard. The beast roars in fury, its eyes gleaming with malice. You have two options: attempt to reason with the dragon or engage it in combat." << endl;
}
void reasonWithDragon(){
    cout << "You step forward and try to reason with the dragon, explaining that you mean no harm and only seek to retrieve some of its treasure to help your kingdom. Surprisingly, the dragon listens to your plea and agrees to let you take a portion of its hoard. Grateful for the dragon's generosity, you gather as much treasure as you can carry before bidding the creature farewell and making your way back to the surface." << endl;
}

void engageDragon(){
    cout << "Realizing that diplomacy is not an option, you draw your weapons and prepare to do battle with the dragon. The creature lunges at you with claws and teeth bared, and a fierce struggle ensues. Despite your best efforts, the dragon proves to be a formidable opponent. With wounds mounting and your platoon suffering casualties, you realize that victory is unlikely. In a last-ditch effort to save yourself and your remaining comrades, you retreat from the cavern, defeated." << endl;
}
void choiceLeftCorridor(){
    cout << "You go to explore the left corridor, hoping it will lead you to the dragon's lair. As you venture deeper into the darkness, the passage narrows, and you find yourself navigating through a labyrinth of twists and turns. Suddenly, you hear a rumbling noise from up ahead. Peering around the corner, you spot a massive boulder blocking the path. You have two options: attempt to move the boulder or find an alternate route." << endl;
}
void moveBoulder(){
cout << "You and your platoon muster all your strength and attempt to move the boulder blocking the path. You manage to move the massive rock, clearing the way forward.  However, another challenge seems to appear. Continuing down the corridor, you see a group of fierce looking monsters, blocking the path forward. Do you 1 choose to engage in combat or 2 choose to use stealth." << endl;
}
void engageMonsters(){
cout << "You and your platoon draw your weapons and prepare to face the monsters head-on. A fierce battle ensues, with swords clashing and spells flying. Unfortunately, you were defeated as a lot of men were tired from moving the boulder." << endl;
}
void disarmTraps(){
 cout << "Recognizing the danger posed by the traps, you and your platoon carefully disarm them one by one. With patience and caution, you successfully neutralize the traps, clearing the way forward. Pressing onward, you finally reach the dragon's lair. Inside, you discover a vast hoard of treasure, gleaming in the dim light. Success! You gather as much treasure as you can carry and make your way back to the surface, triumphant. " << endl;
}
void bypassTraps(){
    cout << "Instead of risking direct confrontation with the traps, you and your team opt to find an alternate route to bypass them. You navigate through hidden passageways and secret tunnels, avoiding the traps altogether. However, you find yourselves hopelessly lost in the maze of passages. It results in you and your platoon failing the mission. " << endl;
}

void useStealth(){
cout << " You signal to your platoon to remain silent as you carefully navigate around the monsters, using the shadows to conceal your movements. You and your team manage to bypass the monsters undetected, silently slipping past them and continuing down the corridor. As you move forward, you encounter a series of traps set to deter intruders. You have two options: disarm the traps or find a way to bypass them. " << endl;
}


void findAlternateRoute(){
cout << "Realizing that the boulder is too heavy to move, you decide to backtrack and search for an alternate route. After exploring several side passages, you eventually find a hidden tunnel that bypasses the obstruction. Following the tunnel, you emerge into the dragon's lair. The sight before you takes your breath away piles of gold, jewels, and artifacts stretch as far as the eye can see. You quickly fill your bags with as much treasure as they can hold before making your way back to the surface, victorious. "  << endl;   
}