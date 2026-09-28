# 3Sum

- **LeetCode:** #15
- **Topic:** Two Pointers
- **Difficulty:** Medium

## Problem
Given an integer array `nums`, return all unique triplets `[nums[i], nums[j], nums[k]]` such that the three numbers add up to zero.

## Approach
Sort the array first. Fix one element, then use two pointers for the remaining portion of the array. Move the pointers based on whether the current sum is smaller or larger than zero, and skip duplicates to keep the result unique.

## Complexity
- **Time:** O(n²)
- **Space:** O(1) extra space apart from the output

## Local Test Case
Input:
```text
[-1, 0, 1, 2, -1, -4]
```

Expected output:
```text
[-1, -1, 2]
[-1, 0, 1]
```

## Notes
Sorting enables the two-pointer scan and also makes duplicate handling straightforward.
