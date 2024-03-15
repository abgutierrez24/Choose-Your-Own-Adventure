#include <iostream>
#include "ArkenstoneFunctions.h"

int firstChoice(int choice){
    int newChoice;
    switch (choice){
        case 1:
            std::cout << "Your platoon journeys in the northeastern direction.\n"
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
}