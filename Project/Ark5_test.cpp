#include "Ark-fifthDecision.cpp"
#include <iostream>

using namespace std;

void test5(){
    cout << "Enter 1\n";
    int output1 = fifthDecision(16);
    if(output1 == 7){
        cout << "\n\ntest passed\n" << endl;
    }

    cout << "Enter nothing\n";
    int output2 = fifthDecision(22);
    if(output2 == 0){
            cout << "\n\ntest passed\n" << endl;
    }
}