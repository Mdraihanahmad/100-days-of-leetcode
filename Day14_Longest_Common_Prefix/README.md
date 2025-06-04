# LeetCode - Longest Common Prefix (Problem 14)

**Link:** [Longest Common Prefix – LeetCode](https://leetcode.com/problems/longest-common-prefix/)  
**GitHub Repo:** [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
**Language:** C++

---

## 💡 Problem Statement

Write a function to find the **longest common prefix** string among an array of strings.

If there is **no common prefix**, return an **empty string `""`**.

### Examples:

- Input: `["flower","flow","flight"]`  
  Output: `"fl"`

- Input: `["dog","racecar","car"]`  
  Output: `""`  
  Explanation: There is no common prefix among the input strings.

---

## 🧠 Approach

- Assume the first string is the **initial prefix**.
- Loop through the rest of the strings:
  - Compare characters one by one.
  - **Trim the prefix** as soon as a mismatch is found.
- If at any point the prefix becomes empty, return it.

---

## ✅ Key Concepts

- String comparison
- Prefix matching
- Efficient early termination
