# LeetCode Solutions

A portfolio of LeetCode practice problems organized by topic. This repository is prepared for the Portfolio Building Activity 6 deliverables.

## Table of Contents

- [Arrays](#arrays)
- [Strings](#strings)
- [Two Pointers](#two-pointers)
- [Sliding Window](#sliding-window)
- [Progress](#progress)
- [Local Testing](#local-testing)
- [Accepted Screenshots](#accepted-screenshots)

## Arrays

- [Two Sum](Arrays/two-sum.md)
- [Best Time to Buy and Sell Stock](Arrays/best-time-to-buy-and-sell-stock.md)

## Strings

- [Valid Anagram](Strings/valid-anagram.md)
- [Valid Palindrome](Strings/valid-palindrome.md)

## Two Pointers

- [Container With Most Water](Two-Pointers/container-with-most-water.md)
- [3Sum](Two-Pointers/3sum.md)

## Sliding Window

- [Longest Substring Without Repeating Characters](Sliding-Window/longest-substring-without-repeating-characters.md)
- [Permutation in String](Sliding-Window/permutation-in-string.md)

## Progress

See [PROGRESS.md](PROGRESS.md).

## Local Testing

Each C++ file contains a small local test inside:

```cpp
#ifdef LOCAL_TEST
```

Compile a file with `-DLOCAL_TEST`.

Example:

```bash
g++ Arrays/two-sum.cpp -std=c++17 -DLOCAL_TEST -o two-sum
```

Run on Windows:

```powershell
.\two-sum.exe
```

## Accepted Screenshots

Place your eight LeetCode Accepted screenshots in the `screenshots/` folder after submitting the problems.

Suggested names:

```text
01_two_sum_accepted.png
02_stock_accepted.png
03_anagram_accepted.png
04_palindrome_accepted.png
05_container_accepted.png
06_3sum_accepted.png
07_longest_substring_accepted.png
08_permutation_accepted.png
```

> The screenshots are evidence for the assignment and should be captured after LeetCode shows the Accepted result.
