#include <iostream>
#include "ArkenstoneFunctions.h"

int secondDecision(int choice){
    int newChoice;
    switch (choice){
        case 1: // Be Honest
            std::cout << "After telling the fairies you intend to take the Arkenstone,\n"
                << "The fairies tell you that their kingdom is to the East." << std::endl;
            std::cout << "Do you believe the fairies and go east,\n"
            << "or do you travel west?" << std::endl;
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
}