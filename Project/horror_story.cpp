#include <iostream>
using namespace std;
// ending functions only output a block of text that concludes the story
void ending8(){
  cout << "Your mouth goes dry as your mind races. You hear the eerie noises sound closer and grit your teeth. Deciding," << endl;
  cout << "you tell your friend to get ready to run back to the car. He realizes your plan and hesitates before nodding. He gets a" << endl;
  cout << "flashlight for both himself and you while you quickly look for you car keys. Not long after, you and your friend reconvene" << endl;
  cout << "and share a glance. In the next moment, the two of you dash in the direction of your original camp. Your friend is in front," << endl;
  cout << "being more familiar with the trail than you. The scary noises now sound far behind you and you feel a little bit relieved." << endl;
  cout << "As you reach the main trail in the woods, your friend suddenly stops, causing you to bump into him. He chokes out" << endl;
  cout << "a mixture of a sob and scream, leading you to cast your gaze at what he was looking at. You instantly freeze" << endl;
  cout << "in fear as your skin pricks with the sensation of being watched. You can vaguely make out a form ahead of you," << endl;
  cout << "its presence sinister. In the next moment, darkness envelopes you and you lose consciousness." << endl;
  cout << endl;
  cout << "You and your friend are deemed missing persons, your bodies never getting found even" << endl;
  cout << "after other campers discover your abandoned camp and car." << endl;
}

void ending7(){
  cout << "You tell your friend that there is no way you're staying after that. He agrees and tells you he wants to leave." << endl;
  cout << "Sharing the sentiment, the two of you make haste to get to your car. Gathering your keys and bringing a flashlight," << endl;
  cout << "the two of you set off to return to the original campsite. You and your friend have little trouble getting into the car," << endl;
  cout << "driving off in a hurry to leave this creepy place." << endl;
  cout << endl;
  cout << "You and your friend encounter no harm, yet you find the campsite absolutely wrecked" << endl;
  cout << "when you return to get your things the next morning." << endl;
}

void ending6(){
  cout << "You and your friend are silent for a moment before you start cheering and whooping. You turn to each other and start" << endl;
  cout << "laughing, both out of nerves and excitement. Your friend pats you on the back and commends your shooting skill. Feeling" << endl;
  cout << "tired up after such an exhilirating moment, you tell your friend you're going to go to sleep now. He says that he will" << endl;
  cout << "do the same. The two of you say good night and get into your respective tents, falling asleep after a few moments." << endl;
  cout << endl;
  cout << "The two of you never wake up. The vengeful ghost of the lake takes your lives in your sleep," << endl;  
  cout << "laying waste on your campsite. When discovered, the place is deemed a crime scene, yet no" << endl;
  cout << "one seems to be able to solve the mystery of your deaths." << endl;
}

void ending5(){
    cout << "You yell for your friend, alerting him. He immediately notices what you're looking at. Not taking your eyes off" << endl;
    cout << "the figure, you restlessly ask him to look for your car keys in your bag. He wordlessly does as you ask him, finding" << endl;
    cout << "them quickly. You tell him you need to run back to your car as fast as you can. He nods, bringing out a flashlight and" << endl;
    cout << "preparing to lead the way. The second you take your eyes off the lake, the two of you dash away. Your friend leads you" << endl;
    cout << "through the trail, retracing your steps until you reach the area you had parked your car in. Your friend opens the car and" << endl;
    cout << "you two jump in quickly. Starting the car, your friend doesn't waste time driving out of the park." << endl;
    cout << endl;
    cout << "You and your friend encounter no harm, finding the campsite untouched" << endl;
    cout << "when you return to get your things the next morning." << endl;

}

void ending4(){
    cout << "You tell him you two need to get into your tents quickly. He hesitates but ends up doing as you suggested," << endl;
    cout << "asking if he can stay with you in your tent because he doesn't want to be alone. Accepting the request, you open up" << endl;
    cout << "your tent and let him in, the both of you staying quiet as you sit in the dark. You hold onto a camp knife you took with" << endl;
    cout << "you in case, but the moment you feel a gust of wind strong enough to topple your tent, you realize how helpless you are." << endl;
    cout << "You and your friend's screams echo throughout the camping grounds as sinister shadows make quick work of you." << endl;
    cout << endl;
    cout << "There are news reports the next day about other campers finding two bodies at a campground," << endl;
    cout << "the causes of death unclear." << endl;
}

void ending3(){
    cout << "You tell him you two need to leave. Getting up, you say that you're getting out of here, not caring about the long" << endl;
    cout << "drive is. You ask him if he's fine coming back another day to collect his things at the campsite and he nods." << endl;
    cout << "Coming to an agreement, you fish out your car keys and unlock it, jumping into the driver's seat as your friend sits" << endl;
    cout << "next to you. You spend the rest of the night driving to the nearest town and spend your night in a motel." << endl;
    cout << endl;
    cout << "You and your friend encounter no harm, finding the campsite untouched" << endl;
    cout << "when you return to get your things the next morning." << endl;
}

void ending2(){
    cout << "You know that something terribly wrong has happened. You feel terror take over you, feeling paralyzed in the face" << endl;
    cout << "of possible death. Closing your eyes tightly, you try to quiet your breathing and stay still, praying that" << endl;
    cout << "whatever got your friend doesn't come after you next. You stay in this tense state of fear until the morning comes." << endl;
    cout << "After a night of torment, you are too tired to cry when you find your friend's dead body. You call authorities" << endl;
    cout << "for help and they arrive a few hours later." << endl;
    cout << endl;
    cout << "No one believes what you had gone through that night, with the police even" << endl;
    cout << "suspecting you for your friend's murder." << endl;
}

void ending1(){
    cout << "You jump up from your sleeping bag, calling out for your friend in a panic. Getting up, you start unzipping" << endl;
    cout << "your tent to leave. Once outside, you squint in the dark as your eyes get adapt. A gasp escapes you as you" << endl;
    cout << "notice your friend's lifeless body on the ground nearby the forest. In an instant you sense an ominous presence" << endl;
    cout << "near you. With no time to think, you meet the same fate as your friend instantaneously." << endl;
    cout << endl;
    cout << "There are news reports the next day about other campers finding two bodies at a campground," << endl;
    cout << "the causes of death unclear." << endl;
}

// fork functions include the two options users can choose from and calls the 
// corresponding function that continues the story depending on which option was
// chosen with a switch file

void fork3B(){ // outputs two options for story to fork from
  char choice;
  cout << "\tOption 1: You want to drive away." << endl;
  cout << "\tOption 2: You want to hide." <<endl;
  cout << "Which option do you choose (1/2)? ";
  cin >> choice;// takes user's decision into choice variable
  cout << endl;
  switch (choice){ // switch statement that leads to different new story and calls next function
    case '1':
      ending3();
      break;
    case '2':
      ending4();
      break;
    default:
     cout << "Please choose again." << endl;
     fork3B(); // default that makes function repeat if user input is not correct
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
      fork2D();
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

void horror_storyline(){
  char choice;
      cout << "You and your friend get to work with setting up the camp before night falls." << endl; 
      cout << "Just as you start bringing over you and your friends bags to the area you chose to camp in," << endl;
      cout << "you hear some eerie sounds echoing from the forest near your campsite. Chills run down your spine." << endl;
      cout << "Not long after, you friend walks up to you and asks if you heard some shrill laughter." << endl;
      start();
}