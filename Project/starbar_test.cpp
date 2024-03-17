#include "ArkenstoneFunctions.h"
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

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