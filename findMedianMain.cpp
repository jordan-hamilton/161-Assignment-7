#include <iostream>

double findMedian(int array[], int arraySize);

int main() {
  const int ODD_ARRAY_SIZE = 9;
  const int EVEN_ARRAY_SIZE = 8;
  int oddArray[ODD_ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int evenArray[EVEN_ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8 };
  std::cout << "Odd array median: " << findMedian(oddArray, ODD_ARRAY_SIZE) << std::endl;
  std::cout << "Even array median: " << findMedian(evenArray, EVEN_ARRAY_SIZE) << std::endl;
  return 0;
}
