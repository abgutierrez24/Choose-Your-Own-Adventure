#include<iostream>
#include "horror_route2.cpp"

using namespace std;

void horror_storyline(){
  char choice;
  cout << "Upon arriving there what is the first thing you do?" << endl;
  cout << "\tOption 1. Explore the campground." << endl;
  cout << "\tOption 2: Set up the campsite for the weekend." <<endl;
  do{
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      scenario1_start();
      break;
    case '2':
      cout << "" << endl;
      break;
    default:
     cout << "please choose again." << endl;
     break;
  }
  }while (choice != '1' && choice != '2');
  
}
  

 
