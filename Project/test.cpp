#include <iostream>
using namespace std;



void ignore_route5(){
  char choice;
  
  cout << "In your current state, your mind has broken under all the stress and fear. Unfeelingly, you lay back down." <<endl;
  cout << "Your mind races with all contradicting feelings of guilt and need to help your friend clashing with your need of self-preservation." << endl;
  cout << "You stay still, too scared to even breathe loudly. You stay wide awake throughout the night," << endl << "keenly aware of the shadow painted onto your tent wall, making known the presence outside." << endl;
  cout << "Once morning comes, the silhouette leaves and you finally get the guts to get out." << endl;
  cout << "You slowly leave the safety of the tent and look outside, dry heaving the moment you see your friend's body." << endl;
  cout << "After a moment of struggling to collect yourself, you find the mind to look for help," << endl << "retrieving your phone and finding your car to drive to a place with cell service." << endl;
  cout << "You call authorities who come a few hours later, and the rest is history." << endl;
  cout << endl;
  cout << "You grieve your friend's death and are left in a state of dwindling sanity, no one believing" << endl << "what you had gone through on that night, with the police even suspecting you for his murder." << endl;
}

void ignore_route4(){
  char choice;
  cout << "\tOption 1: You go out to check on your friend." << endl;
  cout << "\tOption 2: You stay inside." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      ignore_route5();
      break;
    default:
     cout << "Please choose again." << endl;
     ignore_route4();
  }
  
}

void ignore_route3(){
  char choice;
  cout << "\tOption 1: You get out hurriedly, running over to your friend's tent, intent on confessing all you've been hearing to him." << endl;
  cout << "\tOption 2: You stay inside, deciding that you'd rather stay indifferent"<< endl << "instead of acknowledging all the unnatural things happening around you." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      cout << "You inhale deeply, calming yourself. Afterwards, you lay back down, trying to fall asleep." <<endl;
      cout << "From the corner of your eye, you see your friend glance at you with worry." << endl;
      cout << "You hear him shouting in a panicked manner, rambling about how he can't take it anymore and needs to leave." << endl;
      cout << "Just as you're about to speak up and try to calm him down, you feel a strong gust of wind blow through your campsite, even shaking your tent." << endl;
      cout << "Your friend's scream of agony accompanies the gust, then everything falls quiet. You know something very bad has happened." << endl;
      ignore_route4();
      break;
    default:
     cout << "Please choose again." << endl;
     ignore_route3();
  }
}


void ignore_route2(){
  char choice;
  cout << "\tOption 1: You blurt out your concerns, asking him if he heard that." << endl;
  cout << "\tOption 2: You decide to leave it be, pretending that nothing is wrong." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      cout << "You decide to stay quiet, acting as though nothing was wrong." <<endl;
      cout << "From the corner of your eye, you see your friend glance at you with worry." << endl;
      cout << "He seems to have something to say, but seeing you act so laid-back seems to stop him from speaking." << endl;
      cout << "You notice him fidgeting with his hands throughout the dinner, even as the sounds eventually leave." << endl;
      cout << "You keep up your act, asking him nonchalantly if he was ready to head to bed after you finished your plate of food," << endl;
      cout << "noticing that his was untouched." << endl;
      cout << "He nods, though his expression looks terrible. As you two get into your own respective tents, you are slowly falling asleep when you suddenly feel the ground beneath you start to shake." << endl;
      cout << "A few moments after feeling the movement, you start hearing hoof-beats. Bewildered, you sit up in your tent." << endl;
      ignore_route3();
      break;
    default:
     cout << "Please choose again." << endl;
     ignore_route2();
  }
}

void ignore_route1(){
  char choice;
  cout << "\tOption 1: You say yes." << endl;
  cout << "\tOption 2: You say no." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "you die"<<endl;
      break;
    case '2':
      cout << "For some reason, you say no. He looks even more anxious, starting to mutter to himself and questioning his own sanity." <<endl;
      cout << "He walks away with a confused expression, returning to setting up the camp, albeit hesitantly." << endl;
      cout << "Later on in the evening when it was starting to get dark, you two start preparing dinner." << endl;
      cout << "Just as you sit down around the campfire to eat, you hear thundering hoof-beats from the nearby woods." << endl;
      cout << "Snapping your head to look up from your food, you look at your friend and contemplate how to react." << endl;
      ignore_route2();
      break;
    default:
     cout << "Please choose again." << endl;
     ignore_route1();
  }
}

void scenario1_choice1(){
  char choice;
  cout << "\tOption 1: You decide to ignore it for your own peace of mind." << endl;
  cout << "\tOption 2: You walk up to your friend and question him about it." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "After a few more minutes, you're halfway done setting up your tent when your friend approaches you with a weird look on his face." <<endl;
      cout << "He asks if you've heard laughter from somewhere nearby." << endl;
      ignore_route1();
      break;
    case '2':
      cout << "you live" << endl;
      break;
    default:
     cout << "Please choose again." << endl;
     scenario1_choice1();
  }
}

void scenario1_start(){
  char choice;
  cout << "\tOption 1: Tell him you can do that after setting up." << endl; 
  cout << "\tOption 2: Decide to sate your curiosity and explore the premises." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "He complies and starts helping you with the bags." <<endl;
      cout << "As you and your friend start unpacking, you hear shrill laughter from deeper within the woods nearby." << endl;
      cout << "You don't know if it's just a coyote or if you need to be creeped out." << endl;
      scenario1_choice1();
      break;
    case '2':
      cout << "you live" << endl;
      break;
    default:
     cout << "please choose again." << endl;
     scenario1_start();
  }
}



void horror_storyline(){
  char choice;
  cout << "Upon arriving there what is the first thing you do?" << endl;
  cout << "\tOption 1. Explore the campground." << endl;
  cout << "\tOption 2: Set up the campsite for the weekend." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "" << endl;
      break;
    case '2':
      cout << "You and your friend get to work with setting up the camp before night falls." << endl; 
      cout << "Just as you start bringing over you and your friends bags to the area you chose to camp in," << endl;
      cout << "your friend walks up to you and asks if you want to explore the surroundings before starting." << endl;
      scenario1_start();
      break;
    default:
     cout << "please choose again." << endl;
     horror_storyline();
}
}
  

 



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
            cout << "Please choose again." << endl;
    }
    return 0;
}