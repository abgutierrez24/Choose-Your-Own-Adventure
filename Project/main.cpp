#include <iostream>
#include <string>

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
    << " sees that one friend is inviting them to a night out camping. The other friend is inviting them to (fantasy route scenario)" << endl;
    cout << "A) friend 1 (horror scenario)" << endl;
    cout << "B) friend 2 (fantasy scenario)" << endl;
    cout << name << ", whose invitation will you accept? (A/B) ";
    cin >> storyChoice;

    switch (storyChoice){
        case 'A':
          //call function that starts the horror storyline
          cout << name << " decides to ...";
          break;
        case 'B':
          //call function that starts the fantasy storyline
          cout << name << " decides to ...";
          break;
        default:
          cout << "that is not a proper input";
          break;
    }
}