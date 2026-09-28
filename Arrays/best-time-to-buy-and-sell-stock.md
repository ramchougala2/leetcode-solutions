# Best Time to Buy and Sell Stock

- **LeetCode:** #121
- **Topic:** Arrays
- **Difficulty:** Easy

## Problem
Given an array `prices` where `prices[i]` is the price of a stock on day `i`, choose one day to buy and a later day to sell to maximize profit.

## Approach
Maintain the lowest stock price seen so far. For every current price, calculate the profit obtained by selling today and keep the maximum profit found.

## Complexity
- **Time:** O(n)
- **Space:** O(1)

## Local Test Case
Input:
```text
prices = [7, 1, 5, 3, 6, 4]
```

Expected output:
```text
5
```

## Notes
The best transaction is buying at 1 and selling at 6.
