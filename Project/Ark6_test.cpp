#include "Ark-sixthDecision.cpp"
#include <iostream>
#include <cassert>
#include <sstream>

void test6(){
    std::cout << "Testing OptionalSixth(int choice) with 6 as choice." << std::endl;
  // Redirect standard output to a stringstream
  std::stringstream buffer;
  std::streambuf *old = std::cout.rdbuf(buffer.rdbuf());
  OptionalSixth(6);

  // Restore standard output
  std::cout.rdbuf(old);

  // Get the printed output from the buffer
  std::string output = buffer.str();

  // Compare the output with the expected value
  std::string expected = "The Jedi mind tricks worked! You took the Arkenstone back to your kingdom.\n"
                         "**********************************\n"
                         "**********************************\n"
                         "The kingdom was saved! You Won!\n";
  assert(output == expected);
}