#include "horror_intro.cpp"
#include <iostream>
#include <string>
#include "fantasy_story.cpp"


using namespace std;
/*
Two stories. Continual forking style.
*/

int main(){
    string name;
    char storyChoice;
    cout << "Type out your character's name: ";
    cin >> name;
    cout << name << " wakes up in bed. Rolling over to check their phone, they see a text message from two of their friends. " << name 
    << " sees that one friend is inviting them to a night out camping. The other friend is inviting them to play a video game at their friend's house." << endl;
    cout << "\tOption 1: Go camping." << endl;
    cout << "\tOption 2: Play some video games." << endl;
      cout << name << ", whose invitation will you accept (1/2)? ";
      cin >> storyChoice;
      cout << endl;
      switch (storyChoice){
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
            cout << name << " decides to ...";
            break;
          default:
            cout << "Please choose again." << endl; // FIND WAY TO LOOP UNTIL THERE IS VALID INPUT
    }
    return 0;
}