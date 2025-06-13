📅 Day 22 – Generate Parentheses
🔗 LeetCode Problem: Generate Parentheses  https://leetcode.com/problems/generate-parentheses/
📁 GitHub Repo: https://github.com/Mdraihanahmad/100-days-of-leetcode.git
👨‍💻 Language Used: C++

💡 Problem Statement:
Given n pairs of parentheses, generate all combinations of well-formed parentheses.

✅ Approach:
Used Backtracking to build up valid combinations.

At each step:

If we can still add an open bracket '(', we do so.

If the number of close brackets ')' is less than open, we add a close bracket.

Continue until the current string reaches length 2 * n.

🧠 What I Learned:
Power of backtracking for exploring all valid combinations.

Maintaining constraints dynamically during recursive calls.

Recursive thinking and elegant string construction.

Strengthened control over recursion depth and base conditions.

✅ Completed Day 22 — 78 more to go!
🧩 From parentheses to possibilities — one well-formed step at a time. 