# Day 23 – Merge k Sorted Lists (Hard)

🔗 **LeetCode:** [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists)  
📂 **Repository:** [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode)  
👨‍💻 **Language:** C++

## 🧩 Problem Description
You are given an array of `k` linked-lists, each linked-list is sorted in ascending order.  
Your task is to merge all the linked-lists into one sorted linked-list and return its head.

## 💡 Approach: Min Heap (Priority Queue)
- Use a **min-heap** to efficiently get the smallest node among all current list heads.
- Push the head of each list into the min-heap.
- Pop the smallest, append it to the result, and push its `next` node (if it exists) into the heap.
- Continue until the heap is empty.

### 🔧 Why Priority Queue?
✅ Efficiently finds the minimum  
✅ Ensures we merge nodes in sorted order  
✅ Reduces time complexity from brute-force O(nk) to O(n log k)


## 🧠 What I Learned
- Effective use of **priority queues (min-heaps)** in C++
- Managing pointers in complex linked list structures
- Handling edge cases like empty lists
- Optimizing time and space in merge operations

✅ **Completed Day 23 — 77 more to go!**  
✨ Merged chaos into order — one list at a time!
