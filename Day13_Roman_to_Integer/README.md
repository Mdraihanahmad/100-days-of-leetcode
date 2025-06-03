# LeetCode - Roman to Integer (Problem 13)

**Link:** [Roman to Integer – LeetCode](https://leetcode.com/problems/roman-to-integer/description/)  
**GitHub Repo:** [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
**Language:** C++

---

## 💡 Problem Statement

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Roman numerals are usually written from largest to smallest left to right. But for numbers like 4 and 9, a **subtractive notation** is used:

- IV = 4 (I before V)
- IX = 9 (I before X)
- XL = 40 (X before L)
- XC = 90 (X before C)
- CD = 400 (C before D)
- CM = 900 (C before M)

Your task is to **convert a Roman numeral string into its integer value**.

---

## 🧠 Approach

- Use a **hashmap** to store Roman numeral values.
- Traverse the string **from right to left**.
- If current value is **less than previous**, **subtract** it.
- Otherwise, **add** it.
- This handles all the subtractive cases cleanly.
