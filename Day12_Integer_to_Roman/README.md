# Day 11 - LeetCode Challenge

## Problem: Integer to Roman
**Link:** [LeetCode - Integer to Roman](https://leetcode.com/problems/integer-to-roman/description/)

### 🚀 Problem Statement:
Convert an integer to a Roman numeral. The integer is guaranteed to be within the range from 1 to 3999.

Seven different symbols represent Roman numerals with the following values:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Rules for conversion:
- Use subtractive forms only for 4, 9, 40, 90, 400, and 900 (e.g., IV, IX, XL, XC, CD, CM).
- Repeatable symbols (I, X, C, M) can be used up to three times.
- Non-repeatable symbols (V, L, D) are not used more than once in succession.

---

### 💡 Approach: Greedy Algorithm
- Create a list of value-symbol pairs sorted in descending order.
- Loop through the list, subtract the value from the input number as many times as possible, appending the corresponding symbol each time.
- Stop when the input number becomes zero.

---

### 📂 GitHub Repo:
[100 Days of LeetCode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)

---

### 🧠 What I Learned:
✅ Learned how to apply greedy algorithms to string construction problems.  
✅ Understood the Roman numeral system and its conversion patterns.  
✅ Efficient logic for combining arithmetic with pattern mapping.  
✅ Improved skills in modular arithmetic and while-loop control.

✅ Completed Day 11 — 89 more to go! Let's keep the logic flowing and symbols rolling! 💪
