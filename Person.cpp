/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/20/2018
 ** Description: This function takes an array of integers and an
 ** integer that specifies the size of the array, then sorts the array
 ** and returns the median value of the array as a double.
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
