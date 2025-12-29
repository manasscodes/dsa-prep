// 05_Pointers_References/pointers.cpp
#include <iostream>

int main() {
  int val = 10;

  // Pointer declaration: Use '*'
  // stores the address of 'val'
  int *ptr = &val;

  std::cout << "Value of val: " << val << std::endl;
  std::cout << "Address of val (&val): " << &val << std::endl;
  std::cout << "Value stored in ptr: " << ptr << std::endl;

  // Dereferencing: Access value at the address stored in pointer
  std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl;

  // Modifying value via pointer
  *ptr = 20; // Changes 'val' to 20
  std::cout << "New value of val: " << val << std::endl;

  // Null pointer
  int *nullPtr = nullptr;
  if (nullPtr == nullptr) {
    std::cout << "Pointer is null" << std::endl;
  }

  return 0;
}
