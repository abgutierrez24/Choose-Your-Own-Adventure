/*
Make test files for each funtion. Include them in this file using #include.
call the test. Ensure to put \n before any text so that none of the tests overlap.
*/

#include "Ark-input-test.cpp"
#include "starbar_test.cpp"
#include "horror_test.cpp"
#include "Ark1test.cpp"

int main(){
    starTest();
    inputTest();
    story_simulation();
    Ark1();
    Ark2();
    Ark3();
    Ark4();
    Ark5();
    return 0;
}