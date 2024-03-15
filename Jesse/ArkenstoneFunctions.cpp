#include <iostream>
#include <string>
#include <limits>

void starbar(){
    std::string bar = "**********************************";
    std::cout << bar << "\n" << bar << std::endl;
}

int input() {
    int userInput;

    while (true) {
        std::cout << "Enter your choice ";
        std::cin >> userInput;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (userInput != 1 && userInput != 2) {
            std::cout << "Invalid input. Please enter either 1 or 2." << std::endl;
        }
        else {
            break;
        }
    }
}

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
                return 1; // Yes
            }
            else {
                return 2; // No
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
        case 8: // Sneak off from escorts
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
        case 9: // Be straight up (she hates you)
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
        case 10: // Cause a Distraction
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
        case 11: // Attack
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
                return 10; // sneaky sneaky (same as return 4)
            }
            break; 
    }
}