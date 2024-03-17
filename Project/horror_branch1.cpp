#include <iostream>
#include "horror_branch1_endings.cpp"
using namespace std;

void fork3B(){
  char choice;
  cout << "\tOption 1: You want to drive away." << endl;
  cout << "\tOption 2: You want to hide." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      ending3();
      break;
    case '2':
      ending4();
      break;
    default:
     cout << "Please choose again." << endl;
     fork3B();
}
}

void fork3A(){
  char choice;
  cout << "\tOption 1: You're safe now, time to sleep." << endl;
  cout << "\tOption 2: You feel unsettled, time to leave." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      ending6();
      break;
    case '2':
      ending7();
      break;
    default:
     cout << "Please choose again." << endl;
     fork3A();
}
}

void fork2D(){
  char choice;
  cout << "\tOption 1: Tell him you need to get out of here." << endl;
  cout << "\tOption 2: Tell him you need to hide." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      ending8();
      break;
    case '2':
      ending4();
      break;
    default:
     cout << "Please choose again." << endl;
     fork2D();
}
}

void fork2C(){
  char choice;
  cout << "\tOption 1: Find a way to defend yourself." << endl;
  cout << "\tOption 2: Find a way to escape it." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "Thinking quick, you remember the flare gun you had brought along. Staggering back, you keep your eyes on the figure" << endl;
      cout << "as you call out for your friend. Panicking, you yell at him to search through your bag for your flare gun." << endl;
      cout << "Your friend, now noticing what you were staring at in fear, goes quiet and does as you asked. Frantically, he" << endl;
      cout << "goes through your things. He throws the flare gun at you once it's found and you catch it. Your hands shake in fear" << endl; 
      cout << "as you point the flare gun at the terrifying figure in the lake. Then, you pull the trigger. There is an ear-grating" << endl;
      cout << "scream that echoes through the area as you seem to have hit your target. But when you look, it seems like the figure" << endl;
      cout << "had been nothing but a mirage as its image dissipates like smoke." << endl; 
      fork3A();
      break;
    case '2':
      ending5();
      break;
    default:
     cout << "Please choose again." << endl;
     fork2C();
}
}

void fork2B(){
  char choice;
  cout << "\tOption 1: You want to drive away." << endl;
  cout << "\tOption 2: You want to hide." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      ending3();
      break;
    case '2':
      ending4();
      break;
    default:
     cout << "Please choose again." << endl;
     fork2B();
  }
}

void fork2A(){
  char choice;
  cout << "\tOption 1: You get out to check on your friend." << endl;
  cout << "\tOption 2: You stay inside your tent." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      ending1();
      break;
    case '2':
      ending2();
      break;
    default:
     cout << "Please choose again." << endl;
     fork2A();
}
}

void fork1B(){
  char choice;
  cout << "\tOption 1: You choose the spot near the lake." << endl;
  cout << "\tOption 2: You choose the spot in the plains." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "He says okay and takes his things from you, telling you to follow him. It doesn't take long for the lake to appear as" << endl;
      cout << "the forest made way to a clearing near the lake shore. Content with the place, you and your friend set up camp in a" << endl;
      cout << "timely manner. Later at night, you're near the campfire gazing out at the lake. Enjoying the scenery, you almost miss it." << endl;
      cout << "A scrawny, tall figure emerges from the middle of the lake, its body and limbs distorting and looking abnormal." << endl;
      cout << "Long, dark hair sticks to its face, wet from the water, and the moon weakly casts a light that lets you realize" << endl;
      cout << "it was slowly approaching you." << endl;
      fork2C();
      break;
    case '2':
      cout << "He says okay and takes his things from you, telling you to follow him. It takes a lot longer than you expected to" << endl;
      cout << "arrive at the area, but the view of endless open fields makes you feel as though it was worth it. You and your friend" << endl;
      cout << "don't waste time once you get there, intent on setting up camp before the fast approaching night arrived." << endl;
      cout << "Later at night, you and your friend are sitting near your campfire enjoying dinner after a long afternoon of" << endl;
      cout << "finding a camping spot and preparing it. Just as you and your friend start winding down, a strong gust of wind blows" << endl;
      cout << "through your campsite and blows off your fire. You are just about to excuse it to the fact that you were in an open area" << endl;
      cout << "when you hear it. Hair-raising shrieks and wailing sound from all around you as though you were surrounded. Your" << endl;
      cout << "friend grabs your arm so you look at him, a teriffied expression on his face as he asks you what was going on." << endl;
      cout << "" << endl;
      //FUNCTION CALL
      break;
    default:
     cout << "Please choose again." << endl;
     fork1B();
}
}

void fork1A(){
  char choice;
  cout << "\tOption 1: You pretend nothing's amiss." << endl;
  cout << "\tOption 2: You freak out." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "You play it cool again, surprising yourself with how good your poker face is. You ask your friend if he's" << endl;
      cout << "ready for bed, standing up to walk over to your tent. You hear your friend muttering to himself, sounding " << endl;
      cout << "confused and afraid. You yell good night to your friend over your shoulder and get into your tent." << endl;
      cout << "After a few moments of you trying to sleep, you hear the unmistakable sound of your friend screaming in terror and pain." << endl;
      fork2A();
      break;
    case '2':
      cout << "You finally break, unable to calm your nerves anymore. You get up immediately and tell your friend that you" << endl; 
      cout << "think that something dangerous is nearby. He has an expression of half relief and half concern on his face, nodding" << endl;
      cout << "in agreement to your words. He asks you what should be done about this whole situation." << endl;
      fork2B();
      break;
    default:
     cout << "Please choose again." << endl;
     fork1A();
}
}

void start(){
  char choice;
  cout << "\tOption 1: You say no." << endl;
  cout << "\tOption 2: You say yes." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;
  cout << endl;
  switch (choice){
    case '1':
      cout << "You choose to act blissfully unaware and reply to your friend with a no. He looks surprised" << endl;
      cout << "but ends up shrugging it off. He thanks you for getting his stuff then starts unpacking and pitching his tent." << endl;
      cout << "When night comes, you and your friend are sitting by your campfire when you start feeling the ground tremble." << endl;
      cout << "Hoof-beats sound from faraway, accompanied by an unearthly screech. You and your friend make eye contact." << endl; 
      fork1A();
      break;
    case '2':
      cout << "You have an expression of concern on your face as you confirm that you did hear something creepy from the" << endl; 
      cout << "woods. Not liking how close by it sounded, you ask your friend if the two of you could just move away. He suggests" << endl;
      cout << "two other spots he knows, with one near the park's lake and the other being a bit further away in an open plain." << endl;
      cout << "He reminds you that you're going there by foot since your car can't follow the narrow trails to both areas." << endl;
      fork1B();
      break;
    default:
     cout << "Please choose again." << endl;
     start();
}
}