# Divide Two Integers

LeetCode problem **"Divide Two Integers"** (Problem #29).

Given two integers `dividend` and `divisor`, divide two integers without using multiplication, division, and mod operator.

The result should truncate toward zero.

---

### 🧠 Problem Statement

Return the quotient after dividing dividend by divisor.

Constraints:
- Use only addition, subtraction, and bit manipulation
- Handle overflow for 32-bit signed integer range

---

### 🧩 Approach

- Convert numbers to positive using long long
- Repeatedly subtract divisor multiples using bit shifting
- Use left shift to double divisor efficiently
- Handle sign separately
- Handle overflow case (INT_MIN / -1)

---

### 💻 Example

Input:
dividend = 10
divisor = 3

Output:
3

---

### ⏱ Complexity

Time Complexity: O(log n)
Space Complexity: O(1)

---

### 📂 GitHub Repo

https://github.com/Mdraihanahmad/100-days-of-leetcode.git