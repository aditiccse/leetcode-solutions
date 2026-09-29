## Problem: Valid Anagram

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26. Characters from the first string increase their counts, while characters from the second string decrease them. If all counts are zero, the strings are anagrams.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

I tested "anagram" and "nagaram" as a valid pair, and "rat" and "car" as an invalid pair. The solution was Accepted.