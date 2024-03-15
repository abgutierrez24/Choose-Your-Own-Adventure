#include<iostream>
#include "horror_AwareDefend_route.cpp"
using namespace std;

void move_route5(){
  cout << "Wanting to take safer measures, you drive the car to the entrance of the park where you and your friend decided to camp." << endl;
  cout << "Parking the vehicle there, you take out your phone, checking to find that you finally have cell service." << endl;
  cout << "Just for the sake of trying, you call your friend's number." << endl;
  cout << "After hearing the automated response saying his number cannot be reached, you sigh and just decide to send a text." << endl;
  cout << "Afterwards, you get comfortable, recline your seat, and rest your eyes." << endl;
  cout << "The night passes by surprisingly peacefully, for which you are grateful. Once morning comes, you wake up and check your phone." << endl;
  cout << "Seeing no response, you start driving back to where you last remember seeing your friend." << endl;
  cout << "With daylight, it is much easier to find your friend's new campsite." << endl;
  cout << "Rolling up to see if he was anywhere nearby, you find no one at his tent." << endl;
  cout << "Walking by foot around the area, you call his name. Then, by the lake, you see it. His body, washed up and unmoving. " << endl;
  cout << endl;
  cout << "Your friend has died and you are left with survivor's guilt." << endl;

}

void move_route4(){
  char choice;
  cout << "\tOption 1: You drive around, going as far as the camp trails allow you, searching for any sign of your friend." << endl;
  cout << "\tOption 2: You decide to wait in the car throughout the night, opting to go check on your friend later in the morning." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      move_route5();
    default:
     cout << "Please choose again." << endl;
     move_route4();
  }
}

void move_route3(){
  char choice;
  cout << "\tOption 1: You give up, retreating to your nearby car for safety." << endl;
  cout << "\tOption 2: You keep going, hoping for the best." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "You don't like the odds of how dark and foggy it is right now, feeling too scared to leave and search for your friend." << endl;
      cout << "Not knowing what else to do, you retreat to your car, deciding that it was the safest option at the moment." << endl;
      cout << "Since you had remembered to pack your keys, you get inside with no trouble." << endl;
      cout << "But once you get settled, you feel overwhelming guilt as you remember your friend who you have been separated from." << endl;
      cout << "You are unsure if he is even aware of the danger you had found and wonder if you should go out and look for him." << endl;
      
      break;
    case '2':
      cout << "you die"<<endl;
      break;
    default:
     cout << "Please choose again." << endl;
     move_route3();
  }
}

void move_route2(){
  char choice;
  cout << "\tOption 1: You quicken your pace and rush, shoving whatever you can find into your backpack" << endl;
  cout << "\t          and carelessly stuffing the tent's frame into its bag." << endl;
  cout << "\tOption 2: You try to hurry but remain thorough as you pack your things." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      cout << "Your friend finishes packing much earlier than you and decides to go ahead and relocate without waiting for you," << endl;
      cout << "saying that it'd be better for him to find a new spot and start setting up camp quickly." << endl;
      cout << "You feel a bit uneasy but agree with him going off without you in the direction of the camp lake." << endl;
      cout << "As his figure disappears in the evening fog, you continue packing at a quicker pace," << endl;
      cout << "not wanting to be separated from your friend for too long." << endl;
      cout << "Once you finish, you run off to where you last saw your friend going." << endl;
      cout << "Unfortunately, the night has grown darker and your sense of direction weakens as the fog thickens around you." << endl;
      move_route3();
      break;
    default:
     cout << "Please choose again." << endl;
     move_route2();
  }
}

void move_route1(){
  char choice;
  cout << "\tOption 1: You've already put in so much effort into setting up the place. It's better to stay and see it through." << endl;
  cout << "\tOption 2: Move the camp. Better safe than sorry." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "He nods after some thought, seeming hesitant. After setting up the place, the sun eventually sets and the night sky comes out."<<endl;
      cout << "You and your friend are having dinner when you start hearing the ungodly noises again." << endl;
      cout << "You and your friend make eye contact and he immediately speaks up, telling you he's getting worried and scared. " << endl;
      stay_route1();
      break;
    case '2':
      cout << "As you start re-packing your things, your friend asks you to hurry up because there is barely any daylight left." << endl;
      cout << "You want to do as he says but you're worried you might leave something behind. " << endl;
      move_route2();
      break;
    default:
     cout << "Please choose again." << endl;
     move_route1();
  }
}