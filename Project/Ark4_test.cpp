#include "Ark-fourthDecision.cpp"
#include <iostream>

using namespace std;

void test4(){
    cout << "Enter 1\n";
    int output1 = fourthDecision(5);
    if(output1 == 9){
        cout << "\n\ntest passed\n" << endl;
    }

    cout << "Enter 1\n";
    int output2 = fourthDecision(8);
    if(output2 == 15){
            cout << "\n\ntest passed\n" << endl;
    }
}