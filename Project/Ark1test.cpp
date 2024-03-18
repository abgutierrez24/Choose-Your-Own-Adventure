#include "ArkenstoneFunctions.h"
#include "Ark-1-3Decisions.h"
#include "Ark-fourthDecision.h"
#include "Ark-fifthDecision.h"
#include "Ark-sixthDecision.h"
#include <iostream>
#include <sstream>
#include <cassert>

void inputTest(){
    std::cout << "Enter 1\n";
    int output = input();
    assert(output == 1);
    std::cout << "\n\nEnter 2\n";
    int output1 = input();
    assert(output1 == 2);
    std::cout << "\n\n";
}

void starTest() {
  std::cout << "Testing starbar()." << std::endl;
  // Redirect standard output to a stringstream
  std::stringstream buffer;
  std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());
  starbar();

  // Restore standard output
  std::cout.rdbuf(old);

  // Get the printed output from the buffer
  std::string output = buffer.str();

  // Compare the output with the expected value
  std::string expected = "**********************************\n**********************************\n";
  assert(output == expected);
}

void Ark1(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = firstDecision(1);
    assert(output1 == 1);

    std::cout << "\nENTER 1 <------\n";
    int output2 = firstDecision(2);
    assert(output2 == 3);
}

void Ark2(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = secondDecision(3);
    assert(output1 == 3);

    std::cout << "\nENTER 1 <------\n";
    int output2 = secondDecision(4);
    assert(output2 == 5);
}

void Ark3(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = thirdDecision(4);
    assert(output1 == 7);

    std::cout << "\nENTER 1 <------\n";
    int output2 = thirdDecision(2);
    assert(output2 == 3);
}

void Ark4(){
    std::cout << "\nENTER 1 <------\n";
    int output1 = fourthDecision(5);
    assert(output1 == 9);

    std::cout << "\nENTER 1 <------\n";
    int output2 = fourthDecision(10);
    assert(output2 == 19);
}

void Ark5(){
    int output1 = fifthDecision(3);
    assert(output1 == 0);

    std::cout << "\nENTER 1 <------\n";
    int output2 = fifthDecision(14);
    assert(output2 == 3);
}

void Ark6() {
  std::cout << "\n\nTesting OptionalSixth(int choice) with 5 as choice." << std::endl;
  // Redirect standard output to a stringstream
  std::stringstream buffer;
  std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());
  OptionalSixth(5);

  // Restore standard output
  std::cout.rdbuf(old);

  // Get the printed output from the buffer
  std::string output = buffer.str();

  // Compare the output with the expected value
  std::string expected = "You are weak. You were knocked dead.\n**********************************\n" \
    "**********************************\nThe kingdom was not saved. You Failed.\n";
  assert(output == expected);
}




