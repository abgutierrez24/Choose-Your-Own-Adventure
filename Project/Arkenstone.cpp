#include "ArkenstoneFunctions.h"
#include "Ark-1-3Decisions.h"
#include "Ark-fourthDecision.h"
#include "Ark-fifthDecision.h"
#include "Ark-sixthDecision.h"
#include <limits>
#include <string>
#include <iostream>

int ArkenstoneStory(){
    int firstChoice;
    int secondChoice;
    int thirdChoice;
    int fourthChoice;
    int fifthChoice;
    int sixthChoice;
    std::cout << "The kingdom is currently experiencing a drought.\n" 
        << "The great wizard of the kingdom says he can bring rain, but he needs the Arkenstone to accomplish this.\n"
        << "The king has directed the platoon you are part of to go find the Arkenstone."
        << "The wizard says that the stone is guarded by the fairies of the enchanted Forest."
        << "You and your platoon must go into the forest to get the stone." << std::endl;

    std::cout << "The platoon is at the boundary of the forest facing north.\n"
        << "They cannot decide whether to go northwest or northeast.\n"
        << "The decision is up to you.\n"
        << "1. Northeast\n2. Northwest" << std::endl;
    firstChoice = input();
    secondChoice = firstDecision(firstChoice);
    thirdChoice = secondDecision(secondChoice);
    fourthChoice = thirdDecision(thirdChoice);
    fifthChoice = fourthDecision(fourthChoice);
    sixthChoice = fifthDecision(fifthChoice);
    OptionalSixth(sixthChoice);
}