## Bonus Problem: Reverse Linked List

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used three pointers: previous, current, and next. I changed each node's next pointer to point to the previous node while traversing the linked list.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

I tested the linked list 1 -> 2 -> 3 -> 4 -> 5. The reversed list was 5 -> 4 -> 3 -> 2 -> 1. The solution was Accepted.
