// 03_Functions/overloading.cpp
#include <iostream>
#include <string>

// Function Overloading: Multiple functions can have the same name
// as long as their parameter list is different

// Version 1: Takes integers
int add(int a, int b) { return a + b; }

// Version 2: Takes doubles
double add(double a, double b) { return a + b; }

// Version 3: Takes 3 integers
int add(int a, int b, int c) { return a + b + c; }

int main() {
  std::cout << "add(int, int): " << add(5, 10) << std::endl;
  std::cout << "add(double, double): " << add(5.5, 2.3) << std::endl;
  std::cout << "add(int, int, int): " << add(1, 2, 3) << std::endl;

  return 0;
}
