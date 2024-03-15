#include<iostream>
#include "horror3.cpp"
using namespace std;

void choiceA5(){
  cout << "In your current state, your mind has broken under all the stress and fear. Unfeelingly, you lay back down."<< endl;
  cout << "Your mind races with all contradicting feelings of guilt and need to help your friend"<< endl;
  cout << "clashing with your need of self-preservation. You stay still, too scared to even breathe loudly."<< endl;
  cout << "You stay wide awake throughout the night, keenly aware of the shadow painted onto your tent wall,"<< endl;
  cout << "making known the presence outside. Once morning comes, the silhouette leaves and you finally"<< endl;
  cout << "get the guts to get out. You slowly leave the safety of the tent and look outside, dry heaving"<< endl;
  cout << "the moment you see your friend's body. After a moment of struggling to collect yourself, you find the mind"<< endl;
  cout << "to look for help, retrieving your phone and finding your car to drive to a place with cell service."<< endl;
  cout << "You call authorities who come a few hours later, and the rest is history."<< endl;
  cout << endl;
  cout << "You grieve your friend's death and are left in a state of dwindling sanity,"<< endl;
  cout << "no one believing what you had gone through on that night, with the police even suspecting you for his murder."<< endl;

}


void choiceA4(){
  char choice;
  cout << "\tOption 1: You go out to check on your friend." << endl; 
  cout << "\tOption 2: You stay inside." << endl; 
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      choiceA5();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA4();
}
}

void choiceA3(){
  char choice;
  cout << "\tOption 1: You get out hurriedly, running over to your friend's tent, intent on confessing all you've been hearing to him." << endl; 
  cout << "\tOption 2: You stay inside, deciding that you'd rather stay indifferent" << endl; 
  cout << "\t          instead of acknowledging all the unnatural things happening around you." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "You inhale deeply, calming yourself. Afterwards, you lay back down, trying to fall asleep."<< endl;
      cout << "Just as you close your eyes, you hear the sound of your friend’s tent door unzipping."<< endl;
      cout << "You hear him shouting in a panicked manner, rambling about how he can’t take it anymore and needs to leave."<< endl;
      cout << "Just as you’re about to speak up and try to calm him down, you feel a strong gust of"<< endl;
      cout << "wind blow through your campsite, even shaking your tent. Your friend’s scream of agony accompanies the gust,"<< endl;
      cout << "then everything falls quiet. You know something very bad has happened." << endl;
      choiceA4();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA3();
}
}

void choiceA2(){
  char choice;
  cout << "\tOption 1: You blurt out your concerns, asking him if he heard that." << endl; 
  cout << "\tOption 2: You decide to leave it be, pretending that nothing is wrong." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "You decide to stay quiet, acting as though nothing was wrong. From the corner of your eye," << endl;
      cout << "you see your friend glance at you with worry. He seems to have something to say,"<< endl;
      cout << "but seeing you act so laid-back seems to stop him from speaking."<< endl;
      cout << "You notice him fidgeting with his hands throughout the dinner, even as the sounds eventually leave."<< endl;
      cout << "You keep up your act, asking him nonchalantly if he was ready to head to bed after you finished your plate of food,"<< endl;
      cout << "noticing that his was untouched. He nods, though his expression looks terrible."<< endl;
      cout << "As you two get into your own respective tents, you are slowly falling asleep when you suddenly"<< endl;
      cout << "feel the ground beneath you start to shake. A few moments after feeling the movement, you start hearing hoof-beats."<< endl;
      cout << "Bewildered, you sit up in your tent." << endl;
      choiceA3();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA2();
}
}

void choiceA1(){
  char choice;
  cout << "\tOption 1: You say yes." << endl; 
  cout << "\tOption 2: You say no." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "He gets a weird look on your face as he quietly agrees to hearing what you've been hearing." << endl;
      cout << "Slightly freaked out, you ask him if it could be a wild animal nearby."<< endl;
      cout << "He shrugs and says you're probably right. He then asks if you'd want to move the campsite or if you don't mind staying."<< endl;
      choiceA1a();
      break;
    case '2':
      cout << "For some reason, you say no. He looks even more anxious, starting to mutter to himself and questioning his own sanity." << endl;
      cout << "He walks away with a confused expression, returning to setting up the camp, albeit hesitantly."<< endl;
      cout << "Later on in the evening when it was starting to get dark, you two start preparing dinner."<< endl;
      cout << "Just as you sit down around the campfire to eat, you hear thundering hoof-beats from the nearby woods."<< endl;
      cout << "Snapping your head to look up from your food, you look at your friend and contemplate how to react."<< endl;
      choiceA2();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1();
}
}