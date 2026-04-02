# Find the Index of the First Occurrence in a String

LeetCode problem **"Find the Index of the First Occurrence in a String"** (Problem #28).

Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or -1 if `needle` is not part of `haystack`.

---

### 🧠 Problem Statement

> Return the index of the first occurrence of `needle` in `haystack`, or `-1` if not found.

---

### 🧩 Approach

- Traverse the string `haystack`
- Compare substring of length equal to `needle`
- If match found → return index
- Else → return -1

---

### 💻 Example

Input:haystack = "sadbutsad"
needle = "sad"


Output:

0


---

### ⏱ Complexity

- Time Complexity: **O(n × m)**
- Space Complexity: **O(1)**

---

### 📂 GitHub Repo

https://github.com/Mdraihanahmad/100-days-of-leetcode.git