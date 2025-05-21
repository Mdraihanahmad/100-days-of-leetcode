# 🚀 Day 01 - Two Sum

## 🧠 Problem:
**Link:** [Two Sum – LeetCode](https://leetcode.com/problems/two-sum/)

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

---

## 💡 Intuition:
The simplest idea is to check all possible pairs of numbers and see if their sum equals the target.

---

## 🔍 Approach:
- Use two nested loops.
- The outer loop picks each element one by one.
- The inner loop checks if any other element after it makes the sum equal to the target.
- Return their indices once found.

This is the **brute force approach**, best for beginners to understand problem-solving logic.

---

## 🧮 Time and Space Complexity:
- **Time Complexity:** $$O(n^2)$$  
  We check all pairs of elements in the array.
- **Space Complexity:** $$O(1)$$  
  We use no extra space (except for the result).

---