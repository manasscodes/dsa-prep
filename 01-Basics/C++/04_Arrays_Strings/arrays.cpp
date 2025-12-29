// 04_Arrays_Strings/arrays.cpp
#include <iostream>

int main() {
  // Array declaration and initialization
  // Arrays have a fixed size
  int numbers[5] = {10, 20, 30, 40, 50};

  // Accessing elements (0-indexed)
  std::cout << "First element: " << numbers[0] << std::endl;
  std::cout << "Third element: " << numbers[2] << std::endl;

  // Modifying elements
  numbers[1] = 99;
  std::cout << "Modified second element: " << numbers[1] << std::endl;

  // Iterating through an array
  std::cout << "All elements: ";
  for (int i = 0; i < 5; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;

  // Range-based for loop (C++11)
  std::cout << "Using range-based loop: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Multidimensional Array
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
  std::cout << "Element at [1][2] (2nd row, 3rd col): " << matrix[1][2]
            << std::endl;

  return 0;
}
