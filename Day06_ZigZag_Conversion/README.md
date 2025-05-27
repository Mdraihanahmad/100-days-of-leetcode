# 🚀 Day 06 - Zigzag Conversion

## 🧠 Problem:
**Link:** [Zigzag Conversion – LeetCode](https://leetcode.com/problems/zigzag-conversion/)

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this (for 3 rows):

Then read line by line: `"PAHNAPLSIIGYIR"`

---

## 💡 Intuition:
We simulate the zigzag traversal by assigning characters to different rows in a specific up-down pattern. The idea is to use a list of strings, where each string corresponds to a row in the zigzag pattern.

---

## 🔍 Approach:
- If the number of rows is 1 or greater than or equal to the string length, return the original string.
- Create a list of strings for each row.
- Traverse the string:
  - Append the character to the current row.
  - Change direction when we hit the top or bottom row.
- Join all rows to get the final result.

---

## 🧮 Time and Space Complexity:
- **Time Complexity:** O(n) — We visit every character once.
- **Space Complexity:** O(n) — We store each character in a row.