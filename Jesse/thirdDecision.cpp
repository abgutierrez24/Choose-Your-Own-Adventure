#include <iostream>
#include "ArkenstoneFunctions.h"

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
}