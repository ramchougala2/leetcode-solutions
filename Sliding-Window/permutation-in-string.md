# Permutation in String

- **LeetCode:** #567
- **Topic:** Sliding Window
- **Difficulty:** Medium

## Problem
Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1` as a substring.

## Approach
Count the required frequency of each character in `s1`. Then slide a fixed-size window of length `s1.size()` across `s2` and compare the window frequency table with the required table.

## Complexity
- **Time:** O(n)
- **Space:** O(1) because the alphabet has 26 lowercase letters

## Local Test Case
Input:
```text
s1 = "ab"
s2 = "eidbaooo"
```

Expected output:
```text
true
```

## Notes
The substring `"ba"` is a permutation of `"ab"`.
