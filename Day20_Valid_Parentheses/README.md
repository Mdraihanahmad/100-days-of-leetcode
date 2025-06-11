# LeetCode - Day 20 ✨

🔗 **LeetCode Problem**: [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/)  
📁 **GitHub Repo**: [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
👨‍💻 **Language Used**: C++

## 🔹 Problem: 20. Valid Parentheses (Easy)

### 🧾 Description
Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket must have a corresponding open bracket of the same type.

---

### 🧠 Approach

- Use a **stack** to keep track of open brackets.
- Push open brackets `(`, `[`, `{` onto the stack.
- When a closing bracket is found, check if the top of the stack matches the corresponding open bracket.
- If not matched or the stack is empty, return `false`.
- At the end, the stack should be empty if all brackets are closed correctly.
