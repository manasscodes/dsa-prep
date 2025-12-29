// 06_Structs_OOP/inheritance.cpp
#include <iostream>

// Base class
class Animal {
public:
  void eat() { std::cout << "I can eat!" << std::endl; }
};

// Derived class
// Dog inherits from Animal
class Dog : public Animal {
public:
  void bark() { std::cout << "I can bark! Woof woof!" << std::endl; }
};

int main() {
  Dog dog1;

  // Calling method from base class
  dog1.eat();

  // Calling method from derived class
  dog1.bark();

  return 0;
}
