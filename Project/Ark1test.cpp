#include "ArkenstoneFunctions.h"
#include "Ark-1-3Decisions.h"
#include "Ark-fourthDecision.h"
#include "Ark-fifthDecision.h"
#include "Ark-sixthDecision.h"
#include <iostream>
#include <cassert>

void inputTest(){
    std::cout << "Enter 1\n";
    int output = input();
    assert(output == 1);
    std::cout << "\n\nEnter 2\n";
    int output1 = input();
    assert(output1 == 2);
    std::cout << "\n\n";
}

void Ark1(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = firstDecision(1);
    assert(output1 == 1);

    std::cout << "\nENTER 1 <------\n";
    int output2 = firstDecision(2);
    assert(output2 == 3);
}

void Ark2(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = secondDecision(3);
    assert(output1 == 3);

    std::cout << "\nENTER 1 <------\n";
    int output2 = secondDecision(4);
    assert(output2 == 5);
}

void Ark3(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = thirdDecision(4);
    assert(output1 == 7);

    std::cout << "\nENTER 1 <------\n";
    int output2 = thirdDecision(2);
    assert(output2 == 3);
}

void Ark4(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = fourthDecision(5);
    assert(output1 == 9);

    std::cout << "\nENTER 1 <------\n";
    int output2 = fourthDecision(10);
    assert(output2 == 19);
}

void Ark5(){
    int output1 = fifthDecision(3);
    assert(output1 == 0);

    std::cout << "\nENTER 1 <------\n";
    int output2 = fifthDecision(14);
    assert(output2 == 3);
}




