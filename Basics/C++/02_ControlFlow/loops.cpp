// 02_ControlFlow/loops.cpp
#include <iostream>

int main() {
  // For Loop: Use when you know how many times to iterate
  std::cout << "For Loop:" << std::endl;
  for (int i = 1; i <= 5; i++) {
    std::cout << i << " ";
  }
  std::cout << "\n" << std::endl;

  // While Loop: Use when you want to loop while a condition is true
  std::cout << "While Loop:" << std::endl;
  int count = 1;
  while (count <= 5) {
    std::cout << count << " ";
    count++;
  }
  std::cout << "\n" << std::endl;

  // Do-While Loop: Executes at least once
  std::cout << "Do-While Loop:" << std::endl;
  int k = 1;
  do {
    std::cout << k << " ";
    k++;
  } while (k <= 5);
  std::cout << std::endl;

  return 0;
}
