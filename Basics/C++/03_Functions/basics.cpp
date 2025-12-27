// 03_Functions/basics.cpp
#include <iostream>

// Function Declaration
// format: returnType functionName(parameters)
void greet() { std::cout << "Hello from a function!" << std::endl; }

// Function that returns a value
int add(int a, int b) { return a + b; }

int main() {
  // Calling the function
  greet();

  int result = add(5, 3);
  std::cout << "5 + 3 = " << result << std::endl;

  return 0;
}
