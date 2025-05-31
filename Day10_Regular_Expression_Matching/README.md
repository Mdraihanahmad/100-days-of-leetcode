# Day 10 - LeetCode Challenge

## Problem: Regular Expression Matching  
**Link:** [LeetCode - Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/description/)

### 🚀 Problem Statement:
Given an input string `s` and a pattern `p`, implement regular expression matching with support for `'.'` and `'*'` where:
- `'.'` Matches any single character.
- `'*'` Matches zero or more of the preceding element.

The matching should cover **the entire input string** (not partial).

---

### 💡 Approach: Recursion + Memoization (Top-Down DP)
- Used a recursive function with 2 pointers `i` (on `s`) and `j` (on `p`)
- Memoized intermediate results in a 2D `dp` table to avoid recomputation
- If the next character in pattern is `*`, we explore both:
  - Zero occurrences
  - One or more (if match exists)
- Return true only if the whole pattern can match the whole string

---

### 🔍 Key Concepts Learned:
- Understanding of regular expressions and greedy matching
- Use of **memoization** to optimize recursive calls
- Edge case handling for empty strings and wildcard patterns
- Improved confidence in solving **Hard level** LeetCode problems 💪
