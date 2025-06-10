# Day 19 – Remove Nth Node From End of List

🔗 **LeetCode Problem**: [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)  
📁 **GitHub Repo**: [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
👨‍💻 **Language Used**: C++

## 📌 Problem Statement
Given the `head` of a linked list, remove the `n`th node from the end of the list and return its head.

### 🧪 Example
**Input**:  
`head = [1,2,3,4,5], n = 2`  
**Output**:  
`[1,2,3,5]`

## 💡 Approach

- Use a dummy node to handle edge cases.
- Apply the two-pointer technique:
  - Move the fast pointer `n+1` steps ahead.
  - Move both fast and slow pointers until fast reaches the end.
  - Skip the node pointed by `slow->next`.
- Delete the unwanted node and return the new head.

## ✅ What I Learned
- Two-pointer technique for linked list manipulation.
- Handling edge cases using dummy node.
- Improving confidence in working with pointers in C++.
