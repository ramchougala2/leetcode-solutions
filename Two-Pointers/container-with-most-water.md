# Container With Most Water

- **LeetCode:** #11
- **Topic:** Two Pointers
- **Difficulty:** Medium

## Problem
Given an array of heights, choose two vertical lines so that together with the x-axis they form a container that holds the most water.

## Approach
Start with pointers at both ends. The current area is limited by the shorter line. Move the pointer at the shorter line inward because moving the taller line cannot increase the limiting height enough to compensate for the reduced width.

## Complexity
- **Time:** O(n)
- **Space:** O(1)

## Local Test Case
Input:
```text
[1,8,6,2,5,4,8,3,7]
```

Expected output:
```text
49
```

## Notes
The two-pointer method avoids checking every pair of lines.
