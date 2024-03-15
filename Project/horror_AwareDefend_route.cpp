#include<iostream>
using namespace std;

void stay_route2(){
  cout << "He doesn't take much time to think about it, nodding in agreement." <<endl;
  cout << "Standing up, both of you start to walk towards your car." << endl;
  cout << "You have your keys on you, so you two get in with no troubles." << endl;
  cout << "You and your friend agree to leave your stuff at the campsite and return for them in the morning." << endl;
  cout << "You drive out of the park, leaving for a nearby town. You stay overnight at a motel safe and sound." << endl;
  cout << endl;
  cout << "Congratulations on surviving." << endl;
}

void stay_route1(){
  char choice;
  cout << "\tOption 1: You tell him you should get into your tents." << endl;
  cout << "\tOption 2: You tell him you two should just get in your car and drive away for now." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      stay_route2();
      break;
    default:
     cout << "Please choose again." << endl;
     stay_route1();
  }
}