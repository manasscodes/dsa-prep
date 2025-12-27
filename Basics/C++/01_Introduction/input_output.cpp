// 01_Introduction/input_output.cpp
#include <iostream>
#include <string> // Required for std::string

int main() {
  int number;
  std::cout << "Enter a number: ";

  // std::cin is used to get input from the user
  // >> is the extraction operator
  std::cin >> number;

  std::cout << "You entered: " << number << std::endl;

  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name; // Note: cin stops at the first whitespace

  std::cout << "Hello, " << name << "!" << std::endl;

  return 0;
}
