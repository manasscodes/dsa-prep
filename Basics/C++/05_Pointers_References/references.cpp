// 05_Pointers_References/references.cpp
#include <iostream>

int main() {
  int original = 100;

  // Reference declaration: Use '&'
  // A reference is an alias for another variable
  // Must be initialized when declared
  int &ref = original;

  std::cout << "Original: " << original << std::endl;
  std::cout << "Reference: " << ref << std::endl;

  // Modifying reference modifies the original
  ref = 200;
  std::cout << "Original after accessing ref: " << original << std::endl;

  // Address is the same
  std::cout << "Address of original: " << &original << std::endl;
  std::cout << "Address of ref: " << &ref << std::endl;

  return 0;
}
