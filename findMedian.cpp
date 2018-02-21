/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 02/20/2018
 ** Description: This function takes an array of integers and an
 ** integer that specifies the size of the array, then sorts the array
 ** and returns the median value of the array as a double.
 *********************************************************************/

#include <algorithm>

double findMedian(int array[], int arraySize) {

  // Define a double variable for the median
  // before we do any calculation.
  double median;

  // Sort the array so our array elements are in ascending order
  std::sort(array, array + arraySize);


  if (arraySize % 2 == 0) {

    // Calculate the mean of the two middle values if there is an even
    // number of elements in the array.

    median = (array[arraySize / 2] + array[(arraySize / 2) - 1]) / 2.0;
  } else {

    // Store the middle array value in the median variable if there
    // is an odd number of elements in the array.

    median = array[(arraySize - 1) / 2];
  }

  return median;
}
