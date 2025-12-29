// 04_Arrays_Strings/strings.cpp
#include <iostream>
#include <string>

int main() {
  // std::string is a dynamic string class provided by C++
  std::string greeting = "Hello";
  std::string name = "World";

  // Concatenation
  std::string message = greeting + ", " + name + "!";
  std::cout << message << std::endl;

  // Length
  std::cout << "Length of message: " << message.length() << std::endl;

  // Accessing characters
  std::cout << "First character: " << message[0] << std::endl;

  // Substring
  // substr(pos, len)
  std::cout << "Substring: " << message.substr(7, 5) << std::endl;

  // Input with spaces
  // std::cin >> stops at space, so use std::getline instead
  std::cout << "Enter a full sentence: ";
  std::string sentence;
  // clear input buffer first if mixing >> and getline
  // std::cin.ignore();
  std::getline(std::cin, sentence);
  std::cout << "You wrote: " << sentence << std::endl;

  return 0;
}
