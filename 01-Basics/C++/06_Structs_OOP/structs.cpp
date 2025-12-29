// 06_Structs_OOP/structs.cpp
#include <iostream>
#include <string>

// Structs are used to group related variables
struct Person {
  std::string name;
  int age;
  double height;
};

int main() {
  // Creating a struct instance
  Person p1;
  p1.name = "Alice";
  p1.age = 30;
  p1.height = 1.65;

  std::cout << "Name: " << p1.name << std::endl;
  std::cout << "Age: " << p1.age << std::endl;
  std::cout << "Height: " << p1.height << "m" << std::endl;

  // Introduction to initialization list (C++11)
  Person p2 = {"Bob", 25, 1.80};

  std::cout << p2.name << " is " << p2.age << " years old." << std::endl;

  return 0;
}
