# Day 09 - LeetCode Challenge

## Problem: Palindrome Number  
**Link:** [LeetCode - Palindrome Number](https://leetcode.com/problems/palindrome-number/description/)

### 🚀 Problem Statement:
Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.  
A palindrome is a number that reads the same forward and backward.

### 💡 Approach: Reverse Half of the Number
- Immediately discard negative numbers and numbers ending in `0` (except `0` itself).
- Reverse half of the number using modulus and division operations.
- Compare reversed half with remaining half.
  - For even digit numbers, both halves should match.
  - For odd digit numbers, discard the middle digit and compare.

🧠 What I Learned:
- Efficient technique to reverse half the digits only.
- Handling edge cases like negative numbers and trailing zeros.
- How to implement palindrome logic without converting the number to a string.
- Enhanced understanding of number manipulation using arithmetic operations.
