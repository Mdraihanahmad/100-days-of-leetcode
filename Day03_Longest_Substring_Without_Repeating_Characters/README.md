# 🚀 Day 03 - Longest Substring Without Repeating Characters

## 🧠 Problem:
**Link:** [Longest Substring Without Repeating Characters – LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Given a string `s`, find the length of the **longest substring** without repeating characters.

---

## 💡 Intuition:
We need to find the maximum-length substring where **all characters are unique**.  
To do this efficiently, we can use the **sliding window** technique and a **hash map** to track the last seen index of characters.

---

## 🔍 Approach:
- Initialize two pointers: `left` and `right` for the sliding window.
- Use a hash map to store the **last seen index** of each character.
- Iterate through the string:
  - If the current character has already been seen and is **within the current window**, move the `left` pointer forward.
  - Update the character’s last seen index.
  - Calculate the current window length and update `maxLength` if it's greater than the previous one.
- Return `maxLength` after traversing the string.

---

## 🧮 Time and Space Complexity:
- **Time Complexity:** $$O(n)$$  
  Each character is visited at most twice.
- **Space Complexity:** $$O(k)$$  
  Where `k` is the size of the character set (e.g., 128 for ASCII).

---