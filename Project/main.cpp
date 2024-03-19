#include "Game.cpp"
#include "ArkenstoneFunctions.h"
#include "class.h"

int main(){
    int again;
    Player newPlayer;
    std::string name = newPlayer.getName();
    do { // Allows the user to play the game as many times as they want
    storyBegin(name);
    std::cout << "Would you like to play again?\n Enter 1 if yes, enter 2 if no: " << std::endl;
    again = input();
    } while (again == 1);
}