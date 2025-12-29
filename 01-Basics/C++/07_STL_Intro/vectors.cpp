// 07_STL_Intro/vectors.cpp
#include <iostream>
#include <vector>

int main() {
  // Vector: Dynamic array
  // Can grow and shrink in size
  std::vector<int> numbers = {1, 2, 3};

  // Adding element to end
  numbers.push_back(4);
  numbers.push_back(5);

  std::cout << "Size: " << numbers.size() << std::endl;

  // Accessing elements
  std::cout << "Element at index 2: " << numbers[2] << std::endl;

  // Iterating
  std::cout << "Vector contents: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Removing last element
  numbers.pop_back();
  std::cout << "Size after pop: " << numbers.size() << std::endl;

  return 0;
}
