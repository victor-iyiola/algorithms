#ifndef _ALGORITHMS_H
#define _ALGORITHMS_H

#include "algorithms_pch.hpp"

namespace algo {

  // Invalid position (couldn't find element).
  static const size_t npos = -1;

  /*
   * +——————————————————————————————————————————————————————————————————————+
   * | +——————————————————————————————————————————————————————————————————+ |
   * | | Search Algorithms.
   * | +——————————————————————————————————————————————————————————————————+ |
   * +——————————————————————————————————————————————————————————————————————+
   */
  namespace search {
    // Iterative binary search algorithm.
    // template <typename T>
    size_t binarySearch(const std::vector<int>&, const int&);

    // template <typename T>
    size_t binarySearch(const std::vector<int>&, const int&, const size_t& left,
                        const size_t& right);

    // Recursive binary search algorithm.

    // template <typename T>
    size_t breadthFirstSearch(const std::vector<int>&, const int&);

    // template <typename T>
    size_t depthFirstSearch(const std::vector<int>&, const int&);

  }  // namespace search

  /*
   * +——————————————————————————————————————————————————————————————————————+
   * | +——————————————————————————————————————————————————————————————————+ |
   * | | Display: Pretty-print.
   * | +——————————————————————————————————————————————————————————————————+ |
   * +——————————————————————————————————————————————————————————————————————+
   */
  namespace display {
    // Pretty print binary searching.
    void binarySearch(const std::vector<int>&);
    void binarySearch(const std::vector<int>&, const int&, const int&);

  }  // namespace display

  /*
   * +——————————————————————————————————————————————————————————————————————+
   * | +——————————————————————————————————————————————————————————————————+ |
   * | | Sorting Algorithms.
   * | +——————————————————————————————————————————————————————————————————+ |
   * +——————————————————————————————————————————————————————————————————————+
   */
  namespace sort {

    /* Bubble Sort. O(n^2) */
    // template <typename T>
    void bubble(std::vector<int>&);

    /* Merge Sort O(logn) */
    // template <typename T>
    void merge(std::vector<int>&);
    void merge(std::vector<int>&, size_t, size_t);
    void mergeHalves(const std::vector<int>&, const std::vector<int>&);

    /* Quick Sort */
    // template <typename T>
    void quick(std::vector<int>&);

    /* Insertion Sort */
    // template <typename T>
    void insertion(std::vector<int>&);

  }  // namespace sort

  /*
   * +——————————————————————————————————————————————————————————————————————+
   * | +——————————————————————————————————————————————————————————————————+ |
   * | | Algorithmic Checks.
   * | +——————————————————————————————————————————————————————————————————+ |
   * +——————————————————————————————————————————————————————————————————————+
   */
  namespace is {
    /* Palindrome */
    bool palindrome(const std::string&);

    /* Anagram. */
    bool anagram(const std::string&, const std::string&);

    /* Prime Number. */
    bool primeNumber(const int&);

    /* Perfect Number. */
    bool perfectNumber(const int&);

    /* Armstrong Number. */
    bool armstrong(const int&);
    bool armstrong(const std::string&);

  }  // namespace is

}  // namespace algo

#endif  //_ALGORITHMS_H
