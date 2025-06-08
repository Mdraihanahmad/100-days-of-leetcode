LeetCode - Letter Combinations of a Phone Number (Problem 17)

Link: Letter Combinations of a Phone Number – LeetCode https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
GitHub Repo: 100-days-of-leetcode  (https://github.com/Mdraihanahmad/100-days-of-leetcode.git)

Language: C++

💡 Problem Statement
Given a string containing digits from 2–9, return all possible letter combinations that the number could represent.

Each digit maps to a set of characters like on a telephone keypad:
🧠 Approach
🔹 Backtracking + Recursion
Map each digit to its corresponding letters using a vector.

Use a recursive backtracking function:

Add one character at a time from the current digit.

Move to the next digit.

Backtrack after exploring all possibilities for the current character.

Stop when the length of the combination equals the input.

🛠 Time & Space Complexity
Time: O(3ⁿ × 4ᵐ), where n is count of digits mapping to 3 letters (like 2, 3, 4, 5, 6, 8) and m is count of digits mapping to 4 letters (like 7 and 9).

Space: O(n) for recursion stack + O(output size)

✅ What I Learned
How to apply backtracking to generate all valid string combinations.

Efficient use of mapping using vectors and ASCII math (digits[i] - '0').

Handling edge cases like empty input.

Recursive depth-first combination generation.

✅ Completed Day 17 — 83 more to go!
🔁 Generated strings from numbers, like an old-school keypad! 
