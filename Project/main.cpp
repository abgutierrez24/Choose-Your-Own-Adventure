#include <iostream>
#include <string>

using namespace std;
/*
Two stories. Continual forking style.
*/

int main(){
    string name;
    cout << "Type out your character's name: ";
    cin >> name;
    int choice;
    cout << "\nchoose the story you want. [lists story options]";
    cin >> choice;
    switch (choice){
        case 1:
            //story 1
            break;
        case 2:
            //story 1
            break;
        default:
            cout << "invalid option";
            break;
    }
    
}