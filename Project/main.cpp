#include <iostream>
#include <string>
#include "fantasy_story.cpp"


using namespace std;
/*
Two stories. Continual forking style.
*/

int main(){
    string name;
    string choice = "y";
    cout << "Type out your character's name: ";
    getline(cin,name);

    
    while (choice == "y") {
        cout << "Are you sure you want this to be your name (click y to change name)? ";
        cin >> choice;

        if(choice =="y"){
        cout << "What would you like to change your name to: ";
        cin >> name;
        cout << "Your name is " << name << endl;
      } else {
        cout << "Your name is " << name << endl;
    }
    }
   
}