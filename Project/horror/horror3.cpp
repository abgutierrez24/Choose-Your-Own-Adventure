#include <iostream>
using namespace std;


void choiceA1g() {
    cout << "He immediately agrees, asking you if you remembered where the car was." << endl;
    cout << "You don't feel too confident but would rather try than be stuck here." << endl;
    cout << "You retrace your steps and miraculously find your car." << endl;
    cout << "Fortunately, you remembered to pack your keys, so the two of you are able to enter and start the car without issues." << endl;
    cout << "You two agree to abandon your belongings for now, prioritizing leaving the general area and returning in the morning." << endl;
    cout << "The two of you leave the place safely, finding a nearby town and staying overnight at a motel. " << endl;
    cout << endl;
    cout << "Congratulations on surviving." << endl;

}

void choiceA1f(){
  char choice;
  cout << "\tOption 1: You say it should be okay if you two just stay put in your campsite for the night," << endl;
  cout << "\t          doing your best to avoid any more weird encounters." << endl;
  cout << "\tOption 2: You tell your friend that you two should just leave, driving away and escaping the whole place." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      choiceA1g();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1f();
  }
}

void choiceA1e(){
  char choice;
  cout << "\tOption 1: You tell him right away." << endl;
  cout << "\tOption 2: You ask him to lead you to the campsite first before telling him about it." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "He nods and starts walking through the woods, the light of a flashlight he brought being the" << endl;
      cout << "only lightsource as the tall trees drown out the moonlight. After a while, the light of a" << endl;
      cout << "campfire starts coming into view, giving you some relief as you had started to fear you were" << endl;
      cout << "about to get lost in the forest. Your friend says you're about to arrive at the camp. Once you" << endl;
      cout << "get settled back into the campsite, you finally tell him what happened. He believes you and" << endl;
      cout << "gets freaked out, saying he's been feeling really nauseous and out of it ever since he relocated nearer to the lake." << endl;
      choiceA1f();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1e();
  }
}

void choiceA1d(){
  char choice;
  cout << "\tOption 1: You run away from the shore, not looking back as you get away as fast as you can." << endl;
  cout << "\tOption 2: You instantly remember a flare gun you had packed, taking it out and aiming it at the figure in the lake." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "Your hands shake in fear as you point the flare gun at the terrifying figure in the lake. Then, you pull the trigger." << endl;
      cout << "There is an ear-grating scream that echoes through the area as you seem to have hit your target," << endl;
      cout << "but when you look it seems like the figure had been nothing but a mirage as its image dissipates like smoke." << endl;
      cout << "Rustling nearby startles you and you instinctively aim your flare gun down at the source of sound," << endl;
      cout << "but you soon find out it's your friend who had seen the light from your shot." << endl;
      cout << "He asks about what happened, saying he found his way to you because of a flare gun." << endl;
      choiceA1e();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1d();
  }
}

void choiceA1c(){
  char choice;
  cout << "\tOption 1: You give up, retreating to your nearby car for safety." << endl;
  cout << "\tOption 2: You keep going, hoping for the best." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "It takes you a lot longer than you'd like to find your way to the lake. Approaching the shore, you look around," << endl;
      cout << "trying to find your friend. The water is illuminated by the moonlight, which somewhat calms your nerves." << endl;
      cout << "Then, from the corner of your eye, you notice it. A scrawny, tall figure emerges from the middle of the lake," << endl;
      cout << "its body and limbs distorting and looking abnormal. Long, dark hair sticks to its face," << endl;
      cout << "wet from the water, and the moon weakly casts a light that lets you realize it was slowly approaching you." << endl;
      choiceA1d();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1c();
  }
}

void choiceA1b(){
  char choice;
  cout << "\tOption 1: You quicken your pace and rush, shoving whatever you can find into" << endl;
  cout << "\t          your backpack and carelessly stuffing the tent's frame into its bag." << endl; 
  cout << "\tOption 2: You try to hurry but remain thorough as you pack your things." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "Your friend finishes packing much earlier than you and decides to go ahead and relocate without waiting for you," << endl;
      cout << "saying that it'd be better for him to find a new spot and start setting up camp quickly." << endl;
      cout << "You feel a bit uneasy but agree with him going off without you in the direction of the camp lake." << endl;
      cout << "As his figure disappears in the evening fog, you continue packing at a quicker pace," << endl;
      cout << "not wanting to be separated from your friend for too long." << endl;
      cout << "Once you finish, you run off to where you last saw your friend going." << endl;
      cout << "Unfortunately, the night has grown darker and your sense of direction weakens as the fog thickens around you." << endl;
      choiceA1c();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1b();
  }
}

void choiceA1a(){
  char choice;
  cout << "\tOption 1: You've already put in so much effort into setting up the place. It's better to stay and see it through." << endl; 
  cout << "\tOption 2: Move the camp. Better safe than sorry." << endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      break;
    case '2':
      cout << "As you start re-packing your things, your friend asks you to hurry up because there is barely any daylight left."<< endl;
      cout << "You want to do as he says but you're worried you might leave something behind." << endl;
      choiceA1b();
      break;
    default:
      cout << "Please choose again." << endl;
      choiceA1a();
}
}