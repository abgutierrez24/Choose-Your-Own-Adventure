#include "Ark-1-3Decisions.cpp"
#include <iostream>

using namespace std;

void test1(){
    cout << "Enter 1\n";
    int output1 = firstDecision(1);
    if(output1 == 1){
        cout << "\n\ntest passed\n" << endl;
    }

    cout << "Enter 1\n";
    int output2 = firstDecision(2);
    if(output2 == 3){
            cout << "\n\ntest passed\n" << endl;
    }
}