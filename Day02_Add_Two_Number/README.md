# 🚀 Day 02 - Add Two Numbers

## 🧠 Problem:
**Link:** [Add Two Numbers – LeetCode](https://leetcode.com/problems/add-two-numbers/)

You are given two non-empty linked lists representing two non-negative integers.  
The digits are stored in **reverse order**, and each of their nodes contains a single digit.  
Add the two numbers and return the sum as a **linked list**.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

---

## 💡 Intuition:
Since the digits are stored in reverse order, we can simulate the **manual addition process from right to left**, like how we add two numbers on paper.

We add corresponding digits from both lists and keep track of any **carry** value to add in the next iteration.

---

## 🔍 Approach:
- Use a res node to simplify the process of building the result list.
- Use a loop that runs until both lists and carry are exhausted.
- At each step:
  - Add corresponding digits from both lists (if present).
  - Add any carry from the previous step.
  - Store the new digit and update carry.
- After the loop, return the next of the res node (head of result list).

---

## 🧮 Time and Space Complexity:
- **Time Complexity:** $$O(\max(n, m))$$  
  We visit each node of both linked lists once.
- **Space Complexity:** $$O(\max(n, m))$$  
  We store the result in a new linked list of similar length.

---