#include <iostream>
#include <limits>

int input();

int main(){
    int choice;
    std::cout << "Your friend has asked you to try a new video game they recently bought.\n"
        << "The game is called \"The King's Mission\". As you and your friend put the game in, \n"
        << "you suddenly find yourself within the video game world.\n"
        << "You find yourself in the armory of a castle. Everyone around you is putting on armor and gathering weapons.\n"
        << "Someone taps you on the shoulder and tells you to put on the armor and to get a weapon."
        << "They asked you, \"What platoon are you a part of? 1 or 2?\"" << std::endl;
    choice = input();
    return 0;
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