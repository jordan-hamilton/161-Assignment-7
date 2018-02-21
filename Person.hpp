/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/20/2018
 ** Description: Specification file for the Person class.
 *********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {

  private:
    std::string name;
    double age;

  public:
    Person(std::string nameIn, double ageIn);
    std::string getName();
    double getAge();

};

#endif
