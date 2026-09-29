## Problem: Valid Parentheses

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. When a closing bracket is encountered, I check whether it matches the most recently stored opening bracket.

### Complexity

- **Time:** O(n)
- **Space:** O(n)

### Notes

I tested "()[]{}" as a valid case and "(]" as an invalid case. The solution was Accepted.