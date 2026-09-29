## Problem: Binary Search

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used binary search with two pointers, left and right. I checked the middle element and discarded the half of the sorted array that could not contain the target.

### Complexity

- **Time:** O(log n)
- **Space:** O(1)

### Notes

I tested a case where the target 9 was found at index 4 and a case where target 2 was not present, returning -1. The solution was Accepted.