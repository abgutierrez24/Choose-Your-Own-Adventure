#include "ArkenstoneFunctions.h"
#include <iostream>
#include <cassert>

void inputTest(){
    std::cout << "Enter 1\n";
    int output = input();
    assert(output == 1);
    std::cout << "\n\nEnter 2\n";
    int output1 = input();
    assert(output == 2);
}