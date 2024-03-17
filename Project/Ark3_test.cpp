#include "Ark-1-3Decisions.cpp"
#include <iostream>

using namespace std;

void test3(){
    cout << "Enter 1\n";
    int output1 = thirdDecision(3);
    if(output1 == 5){
        cout << "\n\ntest passed\n" << endl;
    }

    std::cout << "Enter 1\n";
    int output2 = thirdDecision(6);
    if(output2 == 10){
            cout << "\n\ntest passed\n" << endl;
    }
}