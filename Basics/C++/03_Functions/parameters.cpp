// 03_Functions/parameters.cpp
#include <iostream>

// Pass by Value: Copy of variable is passed
// Original variable is NOT modified
void modifyValue(int x) {
  x = 100;
  std::cout << "Inside modifyValue: " << x << std::endl;
}

// Pass by Reference: Address of variable is passed
// Original variable IS modified
// Use '&' to denote a reference
void modifyReference(int &x) {
  x = 100;
  std::cout << "Inside modifyReference: " << x << std::endl;
}

int main() {
  int num = 10;

  std::cout << "Original num: " << num << std::endl;

  modifyValue(num);
  std::cout << "After modifyValue: " << num << " (Unchanged)" << std::endl;

  modifyReference(num);
  std::cout << "After modifyReference: " << num << " (Changed)" << std::endl;

  return 0;
}
