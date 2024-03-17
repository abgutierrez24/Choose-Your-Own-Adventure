#pragma once
#include <iostream>

class Player{
    public:
        Player(){
            std::string newName;
            std::cout << "Enter your player's name: ";
            std::cin >> newName;
            this->name = newName;
        }
        
        
    private:
        std::string name;
};