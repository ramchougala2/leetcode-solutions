# Valid Palindrome

- **LeetCode:** #125
- **Topic:** Strings
- **Difficulty:** Easy

## Problem
Determine whether a string is a palindrome after converting uppercase letters to lowercase and removing all non-alphanumeric characters.

## Approach
Use two pointers, one from the beginning and one from the end. Skip non-alphanumeric characters, compare the lowercase characters, and move both pointers inward.

## Complexity
- **Time:** O(n)
- **Space:** O(1)

## Local Test Case
Input:
```text
"A man, a plan, a canal: Panama"
```

Expected output:
```text
true
```

## Notes
The string is considered valid when its cleaned, lowercase form reads the same forward and backward.
