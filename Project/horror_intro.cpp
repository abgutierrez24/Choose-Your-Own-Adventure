#include<iostream>
#include "horror_branch1.cpp"
#include "horror_branch2.cpp"

using namespace std;

void horror_storyline(){
  char choice;
  cout << "Upon arriving there what is the first thing you do?" << endl;
  cout << "\tOption 1: Explore the campground." << endl;
  cout << "\tOption 2: Set up the campsite for the weekend." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "" << endl; //JAIR'S STORYLINE 
      break;
    case '2':
      cout << "You and your friend get to work with setting up the camp before night falls." << endl; 
      cout << "Just as you start bringing over you and your friends bags to the area you chose to camp in," << endl;
      cout << "you hear some eerie sounds echoing from the forest near your campsite. Chills run down your spine." << endl;
      cout << "Not long after, you friend walks up to you and asks if you heard some shrill laughter." << endl;
      start();
      break;
    default:
     cout << "please choose again." << endl;
     horror_storyline();
}
}

 
