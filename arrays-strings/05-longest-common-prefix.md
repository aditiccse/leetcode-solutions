## Problem: Longest Common Prefix

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I started with the first string as the current prefix. I compared it with each following string and shortened the prefix until the characters matched.

### Complexity

- **Time:** O(n × m)
- **Space:** O(1) excluding the output

### Notes

I tested ["flower", "flow", "flight"], which gives "fl", and ["dog", "racecar", "car"], which gives an empty prefix. The solution was Accepted.
