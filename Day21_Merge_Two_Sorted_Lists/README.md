# Day 21 – Merge Two Sorted Lists

🔗 **LeetCode Problem**: [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)  
📁 **GitHub Repo**: [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
👨‍💻 **Language Used**: C++

---

## 🧩 Problem Statement:
You are given the heads of two sorted linked lists `list1` and `list2`.  
Merge the two lists into a single sorted linked list by splicing together the nodes of the first two lists.

---

## 💡 Approach:

- 🔸 Use a dummy node to simplify edge cases.
- 🔸 Use a `tail` pointer to build the new list.
- 🔸 Traverse both lists and append the smaller value to the result.
- 🔸 After the loop, append any remaining nodes.
- 🔸 Return `dummy.next` as the head of the merged list.

---

## ✅ What I Learned:

- How to merge two sorted lists efficiently using pointers.
- Importance of dummy nodes for cleaner linked list logic.
- Better understanding of how to manage list construction in-place.
- Practice on edge case handling and optimal pointer movement.
