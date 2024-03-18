#include "Ark-1-3Decisions.cpp"
#include <iostream>

using namespace std;

void test2(){
    cout << "Enter 1\n";
    int output1 = secondDecision(1);
    if(output1 == 1){
        cout << "\n\ntest passed\n" << endl;
    }

    cout << "Enter 1\n";
    int output2 = secondDecision(3);
    if(output2 == 3){
            cout << "\n\ntest passed\n" << endl;
    }
}