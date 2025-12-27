// 06_Structs_OOP/classes.cpp
#include <iostream>
#include <string>

class Car {
private:
  // Access modifier: Data members are usually private (Encapsulation)
  std::string brand;
  int year;

public:
  // Constructor
  Car(std::string b, int y) {
    brand = b;
    year = y;
  }

  // Methods (Member functions)
  void displayInfo() { std::cout << brand << " (" << year << ")" << std::endl; }

  // Getter
  std::string getBrand() { return brand; }

  // Setter
  void setYear(int y) {
    if (y > 1885) {
      year = y;
    }
  }
};

int main() {
  // Creating an object of class Car
  Car myCar("Toyota", 2020);

  // Calling method
  myCar.displayInfo();

  // Modifying via setter
  myCar.setYear(2022);
  myCar.displayInfo();

  return 0;
}
