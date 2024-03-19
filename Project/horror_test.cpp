#include<iostream>
#include "horror_story.cpp"
using namespace std;

// simulates game ending, providing tester with options needed 
// to input in order to get the expected specific ending
    void story_simulation() {
    cout << "--------starting horror storyline test...--------" << endl;
    cout << "SIMULATION'S EXPECTED OUTPUT -  ending 1 & 4: " << endl;
    cout << "There are news reports the next day about" << endl;
    cout << "other campers finding two bodies at a " << endl;
    cout << "campground, the causes of death unclear." << endl;
    cout << "--!!!please stay with one option for this test!!!--" << endl;
    cout << endl;
    horror_storyline();
    cout << endl;
    cout << "###################################################" << endl;
    cout << endl;
    cout << "------starting next horror storyline test...-------" << endl;
    cout << "SIMULATION'S EXPECTED OUTPUT -  ending 8: " << endl;
    cout << "You and your friend are deemed missing persons," << endl;
    cout << "your bodies never getting found even after other" << endl;
    cout << "campers discover your abandoned camp and car." << endl;
    cout << "----!!!please follow choice order: [2, 2, 1]!!!----" << endl;
    cout << endl;
    horror_storyline();
    cout << endl;
    cout << "###################################################" << endl;
    cout << endl;
    cout << "-------starting last horror storyline test...-------" << endl;
    cout << "SIMULATION'S EXPECTED OUTPUT -  ending 6: " << endl;
    cout << "The two of you never wake up. The vengeful ghost of" << endl;
    cout << "the lake takes your lives in your sleep, laying waste" << endl;
    cout << "on your campsite. When discovered, the place is deemed" << endl;
    cout << "a crime scene, yet no one seems to be able to solve the" << endl;  
    cout << "             mystery of your deaths." << endl;
    cout << "---!!!please follow choice order: [2, 1, 1, 1]!!!---" << endl;
    cout << endl;
    horror_storyline();
    }
    
