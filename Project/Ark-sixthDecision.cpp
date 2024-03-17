#include <iostream>
#include "ArkenstoneFunctions.h"

void OptionalSixth(int choice){
    int newChoice;
    switch (choice){
        case 0: // when 5th Decision ends game
            break;
        case 1: // pushups are easy
            std::cout << "The Queen declares, \"You are better than most of the world.\n"
                << "Congratulations! I shall let your kingdom borrow the stone." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            break;
        case 2: // I am weak
            std::cout << "The Queen declares, \"You are undeserving of my generosity.\n"
                << "Go back to your kingdom. I hope you all starve so that your genes are removed from the gene pool.\"" << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            break;
        case 3: // Right is Right
            std::cout << "Going left, you follow the tunnel to the treasury building. Inside, you find the Arkenstone!\n"
                << "Successfully sneaking by the guards, you steal the Arkenstone and get out of there." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            break;
        case 4: // Left is best
            std::cout << "You find yourself in the prison dungeon. Trying to leave, you are caught. \n"
                << "You are your platoon live the rest of your days in fairy prison for trying to steal from the fairies." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            break;
        case 5: // fight them
            std::cout << "You are weak. You were knocked dead." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            break;
        case 6: // more jedi
            std::cout << "The Jedi mind tricks worked! You took the Arkenstone back to your kingdom." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            break;
        case 7: // there's a hole (roof)
            std::cout << "You jumped in, and for some reason you haven't hit the bottom yet. It seems this hole is a bottomless pit.\n"
                << "You are doomed to fall forever. Even after you die, your corpse will remain." << std::endl;
            starbar();
            std::cout << "The kingdom was not saved. You Failed." << std::endl;
            break;
        case 8: // window strat
            std::cout << "You got in through an open window. You sneakily steal the stone." << std::endl;
            starbar();
            std::cout << "The kingdom was saved! You Won!" << std::endl;
            break;
    }
}