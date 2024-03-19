#include <iostream>
#include "ArkenstoneFunctions.h"

int fourthDecision(int choice){
    int newChoice;
    switch (choice){
        case 1: // Search for Food
            std::cout << "Deciding to search for food, some of your comrades find some berries." << std::endl;
            std::cout << "Do you eat the berries?" << std::endl;
            starbar();
            std::cout << "1. Yes\n2. No" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 1; // Yes food 
            }
            else {
                return 2; // No food
            }
            break;
        case 2: // Return Empty-handed
            std::cout << "The platoon decides to return to the kingdom empty-handed because they cannot go on for longer." << std::endl;
            std::cout << "Do you report to the king?" << std::endl;
            starbar();
            std::cout << "1. Yes, for perhaps he will give us a resupply!\n2. No, he may be dissappointed and who knows what will happen then." << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 3; // hope for resupply
            }
            else {
                return 4; // avoid king death decree
            }
            break;
        case 3: // Honesty wins
            std::cout << "The fairy Queen agrees to let your kingdom borrow the Arkenstone for rain! However, there is a catch.\n"
                << "In order to be worthy of her mercy, you must exhibit physical ability." << std::endl;
            std::cout << "Can you do 10 push-ups?" << std::endl;
            starbar();
            std::cout << "1. Yes I can!\n2. I am weak and feabile." << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 5; // pushups are easy
            }
            else {
                return 6; // I am weak
            }
            break;
        case 4: // sneaky sneak
            std::cout << "You sneak off and find two hallways.\n"
                << "Both of the hallways lead to underground tunnels." << std::endl;
            std::cout << "Do you go left or right?" << std::endl;
            starbar();
            std::cout << "1. Right is Right!\n2. Left is Best!" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 7; // Right is right!
            }
            else {
                return 8; // Left is best
            }
            break;
        case 5: // Try to break in anyways!
            std::cout << "Scrambling and pushing at the Golden Gate, your platoon manages to push just you through the bars.\n"
                << "You are alone now. Running in the direction of the fairy kingdom, you notice some fairy warriors chasing after you.\n"
                << "Seeing a large door on the side of a castle-like building, you run for it and hope to lose the guards there.\n"
                << "Entering and running around, you've lost your pursuers, but surely they are more people looking for you now.\n"
                << "By some chance, you have found the Arkenstone within this building! Now you need to get out though." << std::endl;
            std::cout << "How do you plan on leaving?" << std::endl;
            starbar();
            std::cout << "1. Look! There's a hole!\n2. Go back the way you came" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 9; // There's a hole! (leaving the fairies)
            }
            else {
                return 10; // go back the way you came
            }
            break;  
        case 6: // Run away!
            std::cout << "Running away, your party is followed by a group of fairies.\n"
                << "Your platoon starts to split in half." << std::endl;
            std::cout << "Do you go Left or Right?" << std::endl;
            starbar();
            std::cout << "1. Left\n2. Right" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 11; // split Left
            }
            else {
                return 12; // split Right
            } 
            break;  
        case 7: // Follow the Escorts
            std::cout << "Following the escorts, you find youself in the presence of the Fairy Queen." << std::endl;
            std::cout << "What do you tell the Queen?" << std::endl;
            starbar();
            std::cout << "1. \"Our Kingdom is in a drought and our wizard has told us he can bring rain with the Arkenstone\"\n2. *sneak off while your platoon filibusters to the Queen*" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 13; // Honesty wins
            }
            else {
                return 14; // snek
            }
            break;
        case 8: // Sneak off from escorts
            std::cout << "Sneaking off before entering the palace, you find a building separated from the others.\n"
                << "It is more heavily guarded than the others. You suspect this is the building with the Arkenstone." << std::endl;
            std::cout << "How do you Enter?" << std::endl;
            starbar();
            std::cout << "1. The Front Door\n2. The Roof!" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 15; // Front Door
            }
            else {
                return 16; // The Roof
            }
            break;
        case 9: // Be straight up (she hates you)
            std::cout << "The queen hardly listened for two minutes before having you thrown in the dungeon." << std::endl;
            std::cout << " Do you try to escape or wait for the rest of your comrades to come help?" << std::endl;
            starbar();
            std::cout << "1. Try to Escape\n2. Wait for your Comrades to Come Help" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 17; // Try to Escape
            }
            else {
                return 18; // help will come, right?
            }
            break;
        case 10: // Cause a Distraction
            std::cout << "One of your comrades throws a rock at a tree and the other starts running around crazily." << std::endl;
            std::cout << "No one is looking at you." << std::endl;
            starbar();
            std::cout << "1. Run in While You Can!\n2. Oh, Look! There's a hole!" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 19; // Run in While you Can
            }
            else {
                return 20; // DMZ type hole
            }
            break;
        case 11: // Attack
            std::cout << "You are your comrades run at the building, yelling and screaming in the name of your king.\n"
                << "After killing a few of the guards, you and your comrades are finally caught." << std::endl;
            std::cout << "How do you Proceed?" << std::endl;
            starbar();
            std::cout << "1. \"We are not the enemies you are looking for\"\n2. \"You will never take me alive!\"" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 21; // Jedi Mind Tricks
            }
            else {
                return 22; // do their job for them
            }
            break; 
    }
    return 100; // Despite this function not needing a default case due to the input() function's inability to return anything but 1 or 2, 
                // the compiler gave temporary errors (despite still running the code) because this function didn't have a return outside
                // of the switch cases
}