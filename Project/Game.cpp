#include "horror_story.h"
#include <iostream>
#include <string>
#include "fantasy_story.cpp"
#include "class.h"



using namespace std;
/*
Two stories. Continual forking style.
*/
void begin(string name){
    char choice;
    cout << "\tOption 1: Go camping." << endl;
    cout << "\tOption 2: Play some video games." << endl;
      cout << name << ", whose invitation will you accept (1/2)? ";
      cin >> choice;
      cout << endl;
      switch (choice){
          case '1':
            //call function that starts the horror storyline
            cout << name << " decides to reply to the text inviting them to go camping. " << endl;
            cout << name << " and their friend meet up and start driving to the campsite in "<< name << "'s car." << endl;
            cout << name << " and their friend make it to the Braley Pond campground." << endl;
            cout << "It is a place that is considered a dead zone, having no cell service and also far from the towns around it." << endl;
            horror_storyline();
            break;
          case '2':
            //call function that starts the fantasy storyline
            cout << name << " decides to try a new video game at their friend’s house. As soon as\n";
            cout << name << " boots the game up, they find themselves inside the game itself." << endl;
            cout << "They have no idea how they got there and they cannot find their friend." << endl;
            cout << "They find themselves in the armory of a castle. Everyone around "<< name << endl;
            cout <<" is putting on armor and gathering weapons. Someone taps " << name << " on the" << endl;;
            cout << "shoulder and tells them to put on the armor and to get a weapon." << endl;
            cout << endl;
            fantasy_storyline();
            break;
          default:
            cout << "Please choose again." << endl;
            begin(name);
    }
}

int storyBegin(std::string name){
    cout << name << " wakes up in bed. Rolling over to check their phone, they see a text message from two of their friends." << endl;
    cout << name << " sees that one friend is inviting them to a night out camping. The other friend is inviting them to play" << endl;
    cout << "a video game at their friend's house." << endl;
    cout << endl;
    begin(name);
    return 0;
}

