/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/20/2018
 ** Description: This function takes an array of integers and an
 ** integer that specifies the size of the array, then sorts the array
 ** and returns the median value of the array as a double.
 *********************************************************************/

#include <cmath>

#include "Person.hpp"

double stdDev(Person people[], int arraySize) {

  double mean, squaredDeviations, standardDeviation, totalOfAges;

  // Initialize our accumulators to 0
  squaredDeviations = totalOfAges = 0;

  for (int count = 0; count < arraySize; count++) {
    totalOfAges += people[count].getAge();
  }

  mean = totalOfAges / arraySize;

  for (int count = 0; count < arraySize; count++) {

    // Loop through the array again to sum the squared deviations from the mean
    // for each element in the array.

    squaredDeviations += pow((people[count].getAge() - mean), 2.0);
  }

  // Average our squared deviations from the mean, then take the square root
  // to get the population standard deviation.
  
  standardDeviation = pow((squaredDeviations / arraySize), 0.5);
  return standardDeviation;
}
