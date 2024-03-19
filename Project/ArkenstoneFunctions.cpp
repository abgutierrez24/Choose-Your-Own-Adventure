#include <iostream>
#include <string>
#include <limits>

void starbar(){ // this function makes output cleaner
    std::string bar = "**********************************";
    std::cout << bar << "\n" << bar << std::endl;
}

int input() {
    int userInput;

    while (true) {

        // user enters their input
        std::cout << "Enter your choice: ";
        std::cin >> userInput;


        // tests to see if it is an integer
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        // tests to see if the integer is a 1 or 2
        else if (userInput != 1 && userInput != 2) {
            std::cout << "Invalid input. Please enter either 1 or 2." << std::endl;
        }
        // returns value if all tests pass
        else {
            return userInput;
        }
    }
}