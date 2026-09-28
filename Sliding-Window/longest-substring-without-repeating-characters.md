# Longest Substring Without Repeating Characters

- **LeetCode:** #3
- **Topic:** Sliding Window
- **Difficulty:** Medium

## Problem
Given a string `s`, find the length of the longest substring without repeating characters.

## Approach
Maintain a sliding window `[left, right]` containing unique characters. Store the most recent index of each character. When a repeated character appears inside the current window, move `left` to one position after its previous occurrence.

## Complexity
- **Time:** O(n)
- **Space:** O(1) for a fixed 256-character table

## Local Test Case
Input:
```text
"abcabcbb"
```

Expected output:
```text
3
```

## Notes
One longest substring is `"abc"`.
