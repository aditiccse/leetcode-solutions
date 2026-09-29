## Problem: Move Zeroes

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position pointer to track where the next non-zero element should be placed. Each non-zero element is swapped into the next available position.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

I tested [0, 1, 0, 3, 12], which becomes [1, 3, 12, 0, 0], and an edge case containing only zeroes. The solution was Accepted.