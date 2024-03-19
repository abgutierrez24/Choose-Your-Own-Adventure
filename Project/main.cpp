#include "Game.cpp"
#include "ArkenstoneFunctions.h"
#include "class.h"

int main(){
    int again;
    Player newPlayer; // making new player object
    std::string name = newPlayer.getName(); // getting player name from user
    do { // Allows the user to play the game as many times as they want
    storyBegin(name); // game begins
    std::cout << "Would you like to play again?\n Enter 1 if yes, enter 2 if no: " << std::endl;
    again = input(); 
    } while (again == 1);
}