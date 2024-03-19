#include <iostream>
#include "ArkenstoneFunctions.h"

int fifthDecision(int choice){
    int newChoice;
    switch (choice){
        case 1: // Yes food
            std::cout << "Deciding to eat the berries you found, your platoon dies, for they were poisonous berries." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 2: // No Food
            std::cout << "Due to your prior decision to reveal your malicious intentions,\n"
                << "a group of fairy warriors found your platoon and easily killed you all due to your weakened state." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 3: // Hope for resupply
            std::cout << "The king, disappointed in your ability to complete this very important task,\n"
                << "has declared you and your platoon as undeserving of life. You were all hung." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 4: // Avoid king death decree
            std::cout << "You are your comrades live out the rest of your lives as different people,\n"
                << "scared you would be punished for your unsatisfactory work." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed, but at least you weren't executed." << std::endl;
            return 0;
            break;
        case 5: // Pushups are easy
            std::cout << "The Queen declares, \"You are better than most of the world.\n"
                << "Congratulations! I shall let your kingdom borrow the stone." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            return 0;
            break;
        case 6: // I am weak
            std::cout << "The Queen declares, \"You are undeserving of my generosity.\n"
                << "Go back to your kingdom. I hope you all starve so that your genes are removed from the gene pool.\"" << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 7: // Right is Right
            std::cout << "Going left, you follow the tunnel to the treasury building. Inside, you find the Arkenstone!\n"
                << "Successfully sneaking by the guards, you steal the Arkenstone and get out of there." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            return 0;
            break;
        case 8: // Left is best
            std::cout << "You find yourself in the prison dungeon. Trying to leave, you are caught. \n"
                << "You are your platoon live the rest of your days in fairy prison for trying to steal from the fairies." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 9: // There's a hole! (leaving the fairies)
            std::cout << "The hole you jumped in was really dark, but you couldn't get back up so you went with it.\n"
                << "After going through a complex windy cave system half-blind with nothing but the shimmer of the Arkenstone,\n"
                << "you emerge within your kingdom's borders. You have been knighted for your service and for finding a way to invade the fairy kingdom." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            return 0;
            break;
        case 10: // go back the way you came
            std::cout << "Going back the way you came, you are caught by fairy patrol and detained.\n"
                << "You are tried for high treason and hung for the act of thievery from the royal treasury." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 11: // split left 
            std::cout << "Going left, you and the half of the platoon that went left are cornered by the fairy warriors and are slayed." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 12: // split right
            std::cout << "Going right, you are your comrades get away. Half of your platoon died.\n"
            << "The king has declared you and your comrades as undeserving of life. You were all hung." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 13: // Honesty wins
            std::cout << "The fairy Queen agrees to let your kingdom borrow the Arkenstone for rain! However, there is a catch.\n"
                << "In order to be worthy of her mercy, you must exhibit physical ability." << std::endl;
            std::cout << "Can you do 10 push-ups?" << std::endl;
            starbar();
            std::cout << "1. Yes I can!\n2. I am weak and feabile." << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 1; // pushups are easy
            }
            else {
                return 2; // I am weak
            }
            break;
        case 14: // sneaky sneak
            std::cout << "You sneak off and find two hallways.\n"
                << "Both of the hallways lead to underground tunnels." << std::endl;
            std::cout << "Do you go left or right?" << std::endl;
            starbar();
            std::cout << "1. Right is Right!\n2. Left is Best!" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 3; // Right is right!
            }
            else {
                return 4; // Left is best
            }
            break;
        case 15: // front door
            std::cout << "Walking up to the front door, a guard stops you." << std::endl;
            starbar();
            std::cout << "1. Fight them!\n2. \"There is no one to stop.\"" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 5; // fight them
            }
            else {
                return 6; // more jedi
            }
            break;
        case 16: // The roof
            std::cout << "You see a nearby tree.\n"
                << "Climbing it and jumping onto the top of this building, you see two potential ways to get inside." << std::endl;
            std::cout << "How do you plan on leaving?" << std::endl;
            starbar();
            std::cout << "1. Look! There's a hole!\n2. Climb in Through a Window" << std::endl;
            newChoice = input();
            if (newChoice == 1){
                return 7; // There's a hole! (roof)
            }
            else {
                return 8; // window strat
            }
            break;  
        case 17: // Try to Escape
            std::cout << "You were halfway to the exit before you got caught. You and your comrades were then executed." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 18: // help will come, right?
            std::cout << "No one came. You died with your comrades in a cold, dark dungeon." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 19: // Run in while you can
            std::cout << "You got the Arkenstone! The kingdom is saved!\n"
                << "That being said, your comrades now live the rest of their lives out in the fairy queen's dungeon." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won at the Expense of your Comrades.\n"
                << "You should feel horrible about yourself." << std::endl;
            return 0;
            break;
        case 20: // DMZ type hole
            std::cout << "The hole led to a system of caves that eventually brought you to your own kingdom!\n"
                << "The king is not angry you failed your mission, because you found a way to lead a successful secret invasion into the fairy kingdom." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved, but your efforts led to a more effective invasion which DID save the kingdom!\n"
                << "You Won!" << std::endl;
            return 0;
            break;
        case 21: // Jedi Mind Tricks
            std::cout << "The first guard lets you go. They do not understand why they detained you.\n"
                << "You try walking free, but the other guards detain you. You lived the rest of your life in the fairy dungeon." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
        case 22: // do their job for them
            std::cout << "You slip free and jump into the first hole you see. You are now falling forever in a bottomless pit." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            return 0;
            break;
    }
    return 100; // Despite this function not needing a default case due to the input() function's inability to return anything but 1 or 2, 
                // the compiler gave temporary errors (despite still running the code) because this function didn't have a return outside
                // of the switch cases
}