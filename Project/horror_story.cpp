#include <algorithm>
#include <bits/types/FILE.h>
#include <iostream>
#include <ostream>
using namespace std;

void exploreCampground();
void runAndSetup();
void continueExploring();
void seekHelp();
void explainSound();
void observeCarefully();
void prepareForBed();
void questionSound();
void findMyWayBack();
void shadowAppearance();
void fightBack();
void runAway();
void confrontSound();
void goBackToSleep();
void exploreNight();
void wakeUpFriend();
void leaveNow();
void tellFriend();


void exploreCampground() {
    int choice;

    cout << "Upon exploring the campground you and your friend begin to hear someone laughing loud that can't be accounted for." << endl;
    cout << "What do you do?" << endl;
    cout << "Option 1: Run and begin setting up" << endl;
    cout << "Option 2: Continue exploring as if nothing happened" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            runAndSetup();
            break;
        case 2:
            seekHelp();
            break;
        default:
            cout << "Invalid choice!" << endl;
            exploreCampground();
    }
}

void continueExploring() {
    int choice;
    cout << " Still curious where that sound came from you and your friend decide to keep on going and go for about 15 min of exploring until you realize that you forgot how to go back and it's already dark." << endl;
    cout << "What do you do?" << endl;
    cout << "Option 1: Hope for the best and walk back." << endl;
    cout << "Option 2: Just give up and wait till morning." << endl;
    cin >> choice;
    switch (choice) {
        case 1: 
            shadowAppearance();
            break;
        case 2: 
            cout << "You guys have decided to give up and wander around till morning hoping that it will be easier to go back safely. Upon reaching morning from wandering too much you guys have no clue on how to go back. You have failed to survive the night." << endl;
    }                
}

void shadowAppearance() {
    int choice;
    cout << "Upon walking back you see a shadow coming at you guys full speed with a knife but you guys have no weapons to fight back and no-one is there to help you and your friend." << endl;
    cout << "What do you do?" << endl;
    cout << "Option 1: Fight back." << endl;
    cout << "Option 2: Run as fast as you can." << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            fightBack();
            break;
        case 2: 
            runAway();
            break;
        default:
            cout << "Invalid choice!" << endl;
            shadowAppearance();                
    }    
}

void fightBack() {
    cout << "Being the bigger man you decide to fight back but your friend being scared decides to run without you. Being separated you now have to fight against a shadow with no weapons. Upon fighting the weapons thinking that you have won you end up getting stabbed in the neck. You have died." << endl;
}

void runAway() {
    cout << "Knowing that your chances of winning are low you guys decide to run as fast not knowing where you're heading. Looking back every 5 seconds the shadow is closer than ever. Thinking that you have outran the shadow you look down and your friend has been stabbed. You are now next to join your friend. Both you and your friend have died." << endl;
}

void runAndSetUp() {
    int choice;
    cout << "You are now scared for your life but you first have to make it back safely in order to set up .Wanting to make it back safely you decide to keep on going and hoping to seek help. Your friend tells you that's crazy but it can be another option." << endl;
    cout << "What do you do?" <<endl;
    cout << "Option 1: Keep on walking hoping to find help and take you back to camp safely and begin setting up" << endl;
    cout << "Option 2: Try to find the way to go back." << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            seekHelp();
            break;
        case 2:
            findMyWayBack();
            break;
        default:
            cout << "Invalid choice!" << endl;
            runAndSetUp();
    }
}

void explainSound() {
    int choice;
    cout << "Your friend begins to tell you about the shadow he saw and the sound he heard. As soon as he is done speaking you and your friend begin to hear that scary loud laughter once again. " << endl;
    cout << "What do you do?" << endl;
    cout << "Option 1: Do you tell him to shut up and listen carefully." << endl;
    cout << "Option 2: Begin panicking and decide to get inside the tent." << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            observeCarefully();
            break;
        case 2:
            prepareForBed();
            break;
        default:
            cout << "Invalid choice!" << endl;
            explainSound();      
    }

}

// void questionSound() {
//     int choice;

// }



void seekHelp() {
    int choice;
    cout << "You guys finally decide to seek help as that is the only way you guys can make it safely to the campsite. Eventually you see some other guys just vibing and decide to ask them for a ride back. He agrees and takes you back.Upon arriving you thank him and your friend begins to set up the campsite.While setting up he hears the sound once again and sees the shadow that passes by the campsite." << endl;
    cout << "What do you do? " << endl;
    cout << "Option 1: Do you tell him about the sound you heard earlier." << endl;
    cout << "Option 2: Begin asking more about the shadow and the sound." << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            explainSound();
            break;
        case 2 :
            questionSound();
            break;
        default:
            cout << "Invalid choice!" << endl;
            seekHelp();
    }
}

void findMyWayBack() {
    int choice;
    cout << "You tell him that it's already getting dark and that there will be no chance of making it back because we don't know how so we should ask for help. He still refuses to listen to you and tells you to go with him." << endl;
    cout << "What do you do?" << endl;
    cout << "Option 1: Follow him." << endl;
    cout << "Option 2 Beg for him to listen and hope that he agrees." << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            shadowAppearance();
            break;
        case 2 :
            seekHelp();
            break;
        default:
            findMyWayBack();
    }

}



