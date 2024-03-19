#include <iostream>
#include "dragon_hoardStory.cpp"
#include "dragon_hoardStory.h"
using namespace std;
/*
This function tests to see if the correct ouput is printed
if they follow the choice order.
*/
void dragon_hoardTest(){
    cout << endl;
    cout << "----------------------DRAGON HOARD STORY LINE TEST----------------------" << endl;
    cout << "Expected output:" << endl;
    cout << "You and your platoon decide to engage the creatures in combat, determined to claim " << endl;
            cout <<" the dragon hoard. With weapons drawn, you charge into battle. Despite the ferocity " << endl;
            cout << "of the creatures, your bravery and teamwork prevail. You defeat the creatures and " << endl;
            cout <<"reach the heart of the dragon hoard. You and your platoon make the journey back to " << endl;
            cout <<"the kingdom, triumphant and full with riches. You have succeeded! " << endl;
    cout << "Follow option choice order: [1,1,2,1]" << endl;
    scenario_1();
    cout << endl;
    cout << "----------------------DRAGON HOARD STORY LINE TEST----------------------" << endl;

    cout << "Expected output:" << endl;
    cout << "Realizing that the boulder is too heavy to move, you decide to backtrack and search for " << endl;
        cout << "an alternate route. After exploring several side passages, you eventually find a hidden " << endl;
        cout << "tunnel that bypasses the obstruction. Following the tunnel, you emerge into the dragon's lair. " << endl;
        cout << "You quickly fill your bags with as much treasure as they can hold before making your way back " << endl;
        cout << "to the surface, victorious." << endl;
    cout << "Follow option choice order: [2,1,2]" << endl;
    scenario_1();
    cout << endl;
    cout << "----------------------DRAGON HOARD STORY LINE TEST----------------------" << endl;
    cout << "Expected output:" << endl;
    cout << " You go on the narrow bridge spanning the chasm below. However, disaster strikes as the " << endl;
        cout << "bridge gives way beneath your feet, sending you and your platoon plummeting into the darkness " << endl;
        cout << "below. Your mission ends in failure." << endl;
    cout << "Follow option choice order: [1,2,2]" << endl;
    scenario_1();

}
