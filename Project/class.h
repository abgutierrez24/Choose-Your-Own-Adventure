#pragma once
#include <iostream>

class Player{
    public:
        Player(){
            std::string newName;
            std::cout << "Enter your player's name: ";
            std::getline(std::cin, newName);
            this->name = newName;
        }
        std::string getName(){
            return name;
        }
    private:
        std::string name;
};