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
        std::cout << "Enter your choice: ";
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