# Valid Anagram

- **LeetCode:** #242
- **Topic:** Strings
- **Difficulty:** Easy

## Problem
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

## Approach
Count the occurrences of each lowercase English letter in the first string, then subtract the occurrences using the second string. If all counts finish at zero, the strings are anagrams.

## Complexity
- **Time:** O(n)
- **Space:** O(1) because the alphabet size is fixed at 26

## Local Test Case
Input:
```text
s = "anagram"
t = "nagaram"
```

Expected output:
```text
true
```

## Notes
This solution relies on the problem's lowercase-English-letter constraint.
