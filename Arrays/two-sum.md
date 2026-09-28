# Two Sum

- **LeetCode:** #1
- **Topic:** Arrays
- **Difficulty:** Easy

## Problem
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

## Approach
Use an `unordered_map` to store each number and its index while scanning the array. For the current number, calculate its required complement as `target - nums[i]`. If that complement is already in the map, the two required indices have been found.

## Complexity
- **Time:** O(n) average
- **Space:** O(n)

## Local Test Case
Input:
```text
nums = [2, 7, 11, 15]
target = 9
```

Expected output:
```text
[0, 1]
```

## Notes
The hash map avoids the O(n²) nested-loop approach and finds the complement in O(1) average time.
