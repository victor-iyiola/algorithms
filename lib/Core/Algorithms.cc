#include "../../include/Core/Algorithms.h"
#include <iostream>

/**
 * Binary search iterative implementation.
 *
 * Complexity:
 *    Average:  O(logn)
 *    Worst:    O(n)
 */
// template <typename T>
size_t algo::binarySearch(const std::vector<int>& data, const int& value) {
  // Lower & upper bounds.
  size_t lower = 0, upper = data.size() - 1;

  // Mid point.
  size_t middle = (upper + lower) / 2;

  do {
    if (data[middle] == value)
      return middle;
    else if (data[middle] < value)
      upper = middle - 1;
    else
      lower = middle + 1;

    middle = (upper + lower) / 2;  // recalculate the mid point.
  } while (lower <= upper);

  // Item was not found.
  return algo::npos;
}

/** Binary Search Recursive implementation.
 *
 * Complexity:
 *    Average: O(logn)
 *    Worst: O(n)
 */
template <typename T>
size_t binarySearch(std::vector<T>& data, const T& value, const size_t& left,
                    const size_t& right) {
  // If the left & right crosses each other.
  if (left >= right) return algo::npos;

  // Calculate midpoint.
  size_t middle = (right + left) / 2;

  if (data[middle] == value)
    return middle;
  else if (data[middle] < value)
    return algo::binarySearch(data, value, left, middle - 1);
  else
    return algo::binarySearch(data, value, middle + 1, right);
}

template <typename T>
size_t algo::breadthFirstSearch(const std::vector<T>& graph, const T& item) {
  return algo::npos;
}

template <typename T>
size_t algo::depthFirstSearch(const std::vector<T>& graph, const T& item) {
  return algo::npos;
}

template <typename T, size_t Size>
bool algo::isPalindrome(const T& item) {
  for (size_t i = 0; i < Size; i++)
    // If forward index & reversed index don't match. It's not a Palindrome.
    if (item[i] != item[Size - i - 1]) return false;

  return true;
}

bool algo::isPrimeNumber(const int& num) {
  int count = 0;

  for (int i = 2; i <= num / 2; i++)
    if (num % i == 0) count++;

  return count == 0 && num != 1;
}

bool algo::isPerfectNumber(const int& num) {
  int sum = 0;

  for (int i = 1; i < num; i++)
    if (num % i == 0) sum += i;

  return (sum == num);
}

bool algo::isArmstrong(const int& num) { return false; }
