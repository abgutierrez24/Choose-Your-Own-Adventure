/*
Make test files for each funtion. Include them in this file using #include.
call the test. Ensure to put \n before any text so that none of the tests overlap.
*/

#include "Ark1_test.cpp"
#include "Ark2_test.cpp"
#include "Ark3_test.cpp"
#include "Ark4_test.cpp"
#include "Ark5_test.cpp"
#include "Ark6_test.cpp"
#include "Ark-input-test.cpp"
#include "starbar_test.cpp"
#include "horror_test.cpp"
#include "dragon_hoardTest.cpp"

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    starTest();
    inputTest();
    story_simulation();
    dragon_hoardTest();
    return 0;
}