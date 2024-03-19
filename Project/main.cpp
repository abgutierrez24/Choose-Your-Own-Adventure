#include "Game.cpp"
#include "ArkenstoneFunctions.h"

int main(){
    int again;
    do {
    storyBegin();
    std::cout << "Would you like to play again?\n Enter 1 if yes, enter 2 if no: " << std::endl;
    again = input();
    } while (again == 1);
}