#include "algorithms.hpp"

/*
 * +----------------------------------------------------------------------+
 * | +------------------------------------------------------------------+ |
 * | | Search Algorithms.
 * | +------------------------------------------------------------------+ |
 * +----------------------------------------------------------------------+
 */

/**
 * Binary search iterative implementation.
 *
 * Complexity:
 *    Average:  O(log(n))
 *    Worst:    O(n)
 */
// template <typename T>
size_t algo::search::binarySearch(const std::vector<int>& data,
                                  const int& value) {
  // Lower & upper bounds.
  size_t lower = 0, upper = data.size() - 1;

  // Mid point.
  size_t middle = (upper + lower) / 2;

  do {
    // Print remaining elements of vector to be searched.
    algo::display::binarySearch(data, lower, upper);

    // for (int i =0; i<middle; ++i) std::cout << "   ";
    // std::cout << " ^ " << '\n';

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
 *    Average: O(log(n))
 *    Worst: O(n)
 */
// template <typename T>
size_t algo::search::binarySearch(const std::vector<int>& data,
                                  const int& value, const size_t& left,
                                  // algo::search::binarySearch();
                                  const size_t& right) {
  // If the left & right crosses each other.
  if (left >= right) return algo::npos;

  // Calculate midpoint.
  size_t middle = (right + left) / 2;

  if (data[middle] == value)
    return middle;
  else if (data[middle] < value)
    return algo::search::binarySearch(data, value, left, middle - 1);
  else
    // algo::search::binarySearch();
    return algo::search::binarySearch(data, value, middle + 1, right);
}
// algo::search::binarySearch();

// template <typename T>
size_t algo::search::breadthFirstSearch(const std::vector<int>& graph,
                                        const int& item) {
  return algo::npos;
}

// template <typename T>
std::size_t algo::search::depthFirstSearch(const std::vector<int>& graph,
                                           const int& item) {
  return algo::npos;
}

/*
 * +——————————————————————————————————————————————————————————————————————+
 * | +——————————————————————————————————————————————————————————————————+ |
 * | | Display.
 * | +——————————————————————————————————————————————————————————————————+ |
 * +——————————————————————————————————————————————————————————————————————+
 */
void algo::display::binarySearch(const std::vector<int>& data) {
  algo::display::binarySearch(data, 0, data.size());
}

void algo::display::binarySearch(const std::vector<int>& data, const int& low,
                                 const int& high) {
  for (int i = 0; i < low; ++i) std::cout << "   ";
  for (int i = low; i <= high; ++i) std::cout << data[i] << " ";

  std::cout << '\n';
}

/*
 * +——————————————————————————————————————————————————————————————————————+
 * | +——————————————————————————————————————————————————————————————————+ |
 * | | Sorting Algorithms.
 * | +——————————————————————————————————————————————————————————————————+ |
 * +——————————————————————————————————————————————————————————————————————+
 */
/** Bubble Sort implementation.
 *
 * Complexity:
 *    Best: O(n)
 *    Average: O(n^2)
 */
// template <typename T>
void algo::sort::bubble(std::vector<int>& vec) {
  bool isSorted = false;
  int lastUnsorted = vec.size() - 1;

  while (!isSorted) {
    isSorted = true;
    // 2, 3, 3, 5, 5, 7
    for (int i = 0; i < lastUnsorted; i++) {
      if (vec[i] > vec[i + 1]) {
        int temp = vec[i];
        vec[i] = vec[i + 1];
        vec[i + 1] = temp;
        isSorted = false;
      }
    }

    --lastUnsorted;
  }
}

/** Merge sort recursive implementation.
 *
 * Complexity:
 *  Average: O(logn)
 *
 */
void algo::sort::merge(std::vector<int>& vec) {
  size_t left = 0, right = vec.size();
  size_t middle = (left + right) / 2;
}

void algo::sort::merge(std::vector<int>& vec, size_t left, size_t right) {}

void algo::sort::mergeHalves(const std::vector<int>& left,
                             const std::vector<int>& right) {}

/*
 * +——————————————————————————————————————————————————————————————————————+
 * | +——————————————————————————————————————————————————————————————————+ |
 * | | Algorithmic Checks.
 * | +——————————————————————————————————————————————————————————————————+ |
 * +——————————————————————————————————————————————————————————————————————+
 */

/** Palindrome: whether a number is Palindrome or not.
 *
 * Summary:
 *  If reversed element is same as the element, it's palindrome.
 */
bool algo::is::palindrome(const std::string& word) {
  // If forward index & reversed index don't match,
  // it's not a Palindrome.
  for (size_t i = 0; i < word.size(); i++)
    if (word[i] != word[word.size() - i - 1]) return false;

  return true;
}

/**
 * Anagram words.
 *
 */
bool algo::is::anagram(const std::string& word1, const std::string& word2) {
  return false;
}

/** If a number is a perfect number or not.
 *
 * Summary:
 *  If
 *
 */
bool algo::is::primeNumber(const int& num) {
  int count = 0;

  for (int i = 2; i <= num / 2; i++)
    if (num % i == 0) count++;

  return count == 0 && num != 1;
}

/** If a number is a perfect number or not.
 *
 * Summary:
 *    Sum of it's divisors is equal to the number.
 *
 */
bool algo::is::perfectNumber(const int& num) {
  int sum = 0;

  for (int i = 1; i < num; i++)
    if (num % i == 0) sum += i;

  return (sum == num);
}

bool algo::is::armstrong(const int& num) { return false; }
