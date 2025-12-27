// 01_Introduction/variables_datatypes.cpp
#include <iostream>

int main() {
  // Integer: stores whole numbers
  int age = 25;

  // Double: stores floating point numbers with decimals
  double price = 19.99;

  // Char: stores a single character
  char grade = 'A';

  // Boolean: stores true or false
  bool isStudent = true;

  // Constant: cannot be changed after initialization
  const double PI = 3.14159;

  std::cout << "Age: " << age << std::endl;
  std::cout << "Price: " << price << std::endl;
  std::cout << "Grade: " << grade << std::endl;
  std::cout << "Is Student: " << isStudent
            << std::endl; // Outputs 1 for true, 0 for false
  std::cout << "PI: " << PI << std::endl;

  // Type inference using 'auto' (modern C++)
  auto score = 98.5;
  std::cout << "Score (auto detected): " << score << std::endl;

  return 0;
}
