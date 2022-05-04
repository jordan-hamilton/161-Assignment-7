/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/20/2018
 ** Description: This implements a class that represents a person.
 ** The data members are the person's name and age. Getter methods
 ** return the person's name and age.
 *********************************************************************/

#include "Person.hpp"

// Overloaded constructor used to initialize data members
Person::Person(std::string nameIn, double ageIn) {
  name = nameIn;
  age = ageIn;
}

std::string Person::getName() {
  return name;
}

double Person::getAge() {
  return age;
}
