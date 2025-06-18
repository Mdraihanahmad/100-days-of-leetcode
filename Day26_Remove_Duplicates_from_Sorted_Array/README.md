# Remove Duplicates from Sorted Array
LeetCode problem **"Remove Duplicates from Sorted Array"** (Problem #26).  
Given a sorted array, the task is to remove duplicates **in-place**, such that each unique element appears only once, and return the new length `k`.

### 🧠 Problem Statement

> Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in `nums`.


### 🧩 Approach

- Use two pointers:  
  One to track the last unique element and one to iterate through the array.
- Overwrite the next position only if a new unique element is found.

