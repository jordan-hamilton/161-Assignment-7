/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/20/2018
 ** Description: This function takes an array of Person objects and an
 ** integer that specifies the size of the array, then loops through
 ** the array to calculate the mean age, the sum of squared
 ** deviations from the mean age, and returns the standard deviation
 ** of the population.
 *********************************************************************/

#include <cmath>

#include "Person.hpp"

double stdDev(Person people[], int arraySize) {

  double mean, squaredDeviations, standardDeviation, totalOfAges;

  // Initialize our accumulators to 0
  squaredDeviations = totalOfAges = 0;


  for (int count = 0; count < arraySize; count++) {

    // Loop through the array to sum all ages in the array.
    totalOfAges += people[count].getAge();
  }

  // Caclulate the mean age of the population
  // by dividing the sum of all ages by the size of the array.
  mean = totalOfAges / arraySize;

  for (int count = 0; count < arraySize; count++) {

    // Loop through the array again to sum the squared deviations
    // from the mean for each element in the array.
    squaredDeviations += pow((people[count].getAge() - mean), 2.0);
  }

  // Average the squared deviation from the mean, then take the
  // square root to get the population standard deviation.
  standardDeviation = sqrt(squaredDeviations / arraySize);
  return standardDeviation;
}
