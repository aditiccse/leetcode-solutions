## Problem: Best Time to Buy and Sell Stock

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum stock price seen so far. For each price, I calculated the possible profit by selling at that price and updated the maximum profit.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

I tested [7, 1, 5, 3, 6, 4], which gives a maximum profit of 5, and [7, 6, 4, 3, 1], which gives 0. The solution was Accepted.