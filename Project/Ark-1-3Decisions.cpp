#include <iostream>
#include "ArkenstoneFunctions.h"

int firstDecision(int choice){
    int newChoice;
    switch (choice){
        case 1:
            std::cout << "Your platoon journeys in the northeastern direction. \n"
                << "After a while, your platoon encounters a group of fairies."
                << "They ask why you are here. What do you say?" << std::endl;
            starbar();
            std::cout << "1. Be Honest\n2. Lie About Your Intentions" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 1; // Be Honest (fairies lie about direction)
            }
            else {
                return 2; // Lie About Your Intentions (fairies tell truth about direction)
            }
            break;
        case 2:
            std::cout << "Your platoon journeys in the northwestern direction.\n"
            << "As you journey through the forest, everything begins to seem less wild and more well-kept.\n"
            << "You encounter a large tree wall with a locked golden gate.\n"
            << "There seems to bell on your side of the gate." << std::endl;
            starbar();
            std::cout << "1. Ring the Bell\n2. Try to Break Through the Gate" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 3; // Ring the Bell
            }
            else {
                return 4; // Try to break through the gate
            }
            break;
    }
    return 100; // Despite this function not needing a default case due to the input() function's inability to return anything but 1 or 2, 
                // the compiler gave temporary errors (despite still running the code) because this function didn't have a return outside
                // of the switch cases
}

int secondDecision(int choice){
    int newChoice;
    switch (choice){
        case 1: // Be Honest
            std::cout << "After telling the fairies you intend to take the Arkenstone,\n"
                << "The fairies tell you that their kingdom is to the West." << std::endl;
            std::cout << "Do you believe the fairies and go west,\n"
            << "or do you travel east?" << std::endl;
            starbar();
            std::cout << "1. Travel West\n2. Travel East" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 1; // West
            }
            else {
                return 2; // East
            }
            break;
        case 2: // Lie About Your Intentions
            std::cout << "After telling them you are here to discuss a trade deal with the Queen,\n"
                << "the fairies tell you that their kingdom is to the East." << std::endl;
            std::cout << "Do you believe the fairies and go east,\n"
            << "or do you travel west?" << std::endl;
            starbar();
            std::cout << "1. Travel East\n2. Travel West" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 2; // East
            }
            else {
                return 1; // West
            }
            break;
        case 3: // Ring the Bell
            std::cout << "You ring the bell. A Fairy appears in front of you and \n"
                << "asks you what your purpose is." << std::endl;
            starbar();
            std::cout << "1. Be Honest\n2. Lie About Your Intentions" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 3; // Be Honest at the gate
            }
            else {
                return 4; // Lie About Your Intentions at the gate
            }
            break;
        case 4: // Try to break through the gate
            std::cout << "The gate is unbreakable, but your platoon was able to squeeze you and a few others through.\n"
            << "What do you do now?" << std::endl;
            starbar();
            std::cout << "1. Try to Find the Queen\n2. Sneakily find the Arkenstone" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 5; // Find the Queen
            }
            else {
                return 6; // Sneakily find Arkenstone
            }
            break;         
    }
    return 100; // Despite this function not needing a default case due to the input() function's inability to return anything but 1 or 2, 
                // the compiler gave temporary errors (despite still running the code) because this function didn't have a return outside
                // of the switch cases
}

int thirdDecision(int choice){
    int newChoice;
    switch (choice){
        case 1: // West
            std::cout << "The platoon journeys west. After several days of finding nothing,\n"
                << "supplies have begun to run low and your platoon is getting hungry. " << std::endl;
            std::cout << "Do you search for food or return to the kingdom empty handed?" << std::endl;
            starbar();
            std::cout << "1. Search for Food\n2. Return Empty-handed" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 1; // Search for Food
            }
            else {
                return 2; // Return Empty-handed
            }
            break;
        case 2: // East
            std::cout << "As you journey through the forest, everything begins to seem less wild and more well-kept.\n"
            << "As you begin to approach a golden gate, a group of fairy warriors come out and lead you to the fairy queen,"
            << "for they heard about your mission from the prior fairies. They escort you to the Queen." << std::endl;
            std::cout << "What do you tell the Queen?" << std::endl;
            starbar();
            std::cout << "1. \"Our kingdom is in a great dought and our wizard says he can bring rain with the Arkenstone\"\n2. *sneak off while your platoon filibusters to the Queen*" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 3; // Honesty wins
            }
            else {
                return 4; // sneaky sneak
            }
            break;
        case 3: // Be Honest at the gate
            std::cout << "The fairy tells the platoon to get lost and to run as fast as they can,\n"
            << "lest they die!" << std::endl;
            std::cout << "What do you now?" << std::endl;
            starbar();
            std::cout << "1. Try to Break in Anyways!\n2. Run Away!" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 5; // Try to break in anyways!
            }
            else {
                return 6; // Run away!
            }
            break;
        case 4: // Lie About Your Intentions at the gate
            std::cout << "Telling the fairy you are here to discuss a trade deal with the queen,\n"
            << "the fairy opens the gate to let you and your platoon in. You are escorted to the Queen" << std::endl;
            std::cout << "Do you follow or do you try to sneak off?" << std::endl;
            starbar();
            std::cout << "1. Follow the Escorts to the Queen\n2. Sneak off" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 7; // Follow the Escorts
            }
            else {
                return 8; // Sneak off from escorts
            }
            break;
        case 5: // Find the Queen
            std::cout << "You find the palace, and immediately guards ask you what you are doing.\n"
                << "After explaining you are simply seeking the queen's attention to hear a trade deal,\n"
                << "you are escorted inside. The queen is upset because you broke in \n"
                << "instead of simply ringing the bell at the gate." << std::endl;
            std::cout << "What do you tell the Queen?" << std::endl;
            starbar();
            std::cout << "1. \"Our Kingdom is in a drought and our wizard has told us he can bring rain with the Arkenstone\"\n2. *sneak off while your platoon filibusters to the Queen*" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 9; // Be straight up (she hates you)
            }
            else {
                return 4; // sneaky sneaky (same as return 4)
            }
            break;  
        case 6: // Sneakily find Arkenstone
            std::cout << "You and your comrades see a building that is more heavily guarded than the rest.\n"
            << "You suspect this is where the Arkenstone is kept." << std::endl;
            std::cout << "How do you proceed?" << std::endl;
            starbar();
            std::cout << "1. Cause a Distraction!\n2. Attack!" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 10; // Cause a Distraction!
            }
            else {
                return 11; // Attack!
            } 
            break;      
    }
    return 100; // Despite this function not needing a default case due to the input() function's inability to return anything but 1 or 2, 
                // the compiler gave temporary errors (despite still running the code) because this function didn't have a return outside
                // of the switch cases
}