#include<iostream>
using namespace std;


void scenario1_choice1(){
char choice;
  do{
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      cout << "you live" << endl;
      break;
    default:
     cout << "please choose again." << endl;
     break;
  }
  }while (choice != '1' && choice != '2');
}

void scenario1_start(){
  char choice;
  cout << "You and your friend get to work with setting up the camp before night falls. Just as you start bringing over you and your friends bags to the area you chose to camp in, your friend walks up to you and asks if you want to explore the surroundings before starting." << endl;
  cout << "\tOption 1: Tell him you can do that after setting up." << endl; 
  cout << "\tOption 2: Decide to sate your curiosity and explore the premises." << endl;
  
  do{
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  switch (choice){
    case '1':
      cout << "He complies and starts helping you with the bags. As you and your friend start unpacking, you hear shrill laughter from deeper within the woods nearby." << endl;
      cout << "You don’t know if it’s just a coyote or if you need to be creeped out." << endl;
      cout << "Option 1: You decide to ignore it for your own peace of mind." << endl;
      cout << "Option 2: You walk up to your friend and question him about it." << endl;
      scenario1_choice1();
      break;
    case '2':
      cout << "you live" << endl;
      break;
    default:
     cout << "please choose again." << endl;
     break;
  }
  }while (choice != '1' && choice != '2');
}

