// 02_ControlFlow/conditions.cpp
#include <iostream>

int main() {
  int score = 85;

  // If-Else Structure
  if (score >= 90) {
    std::cout << "Grade: A" << std::endl;
  } else if (score >= 80) {
    std::cout << "Grade: B" << std::endl;
  } else {
    std::cout << "Grade: C or Lower" << std::endl;
  }

  // Switch Statement
  // Useful for checking a variable against multiple specific values
  char grade = 'B';

  switch (grade) {
  case 'A':
    std::cout << "Excellent!" << std::endl;
    break; // Don't forget break to prevent falling through!
  case 'B':
    std::cout << "Well done" << std::endl;
    break;
  case 'C':
    std::cout << "You passed" << std::endl;
    break;
  default:
    std::cout << "Invalid grade" << std::endl;
  }

  return 0;
}
