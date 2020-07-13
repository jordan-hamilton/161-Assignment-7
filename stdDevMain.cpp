#include <iostream>

#include "Person.hpp"

// Function prototype
double stdDev(Person people[], int arraySize);

int main() {
  const int ARRAY_SIZE = 4;
  Person p1("Jordan", 28);
  Person p2("Crystal", 32);
  Person p3("Old person", 932);
  Person p4("Young person", 2);

  Person array[] = {p1, p2, p3, p4};

  std::cout << stdDev(array, ARRAY_SIZE) << std::endl;
  return 0;
}
