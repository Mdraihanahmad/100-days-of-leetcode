**Link:** (https://leetcode.com/problems/3sum-closest/)  
**GitHub Repo:** [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
**Language:** C++

Problem Statement
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.

🧪 Example
Input: nums = [-1, 2, 1, -4], target = 1
Output: 2
Explanation: The closest sum to target is 2 (since -1 + 2 + 1 = 2)

🔍 Approach: Two Pointers After Sorting
Sort the array.

Fix one element at a time, and use two pointers (left and right) to find the closest sum to the target.

Update the closest sum when a smaller absolute difference is found.

Time Complexity: O(n^2)

✅ What I Learned
How to apply the two-pointer technique in a triplet sum scenario.

Sorting can simplify problems involving combinations and comparisons.

Importance of keeping track of the minimum difference while updating the closest sum.

A solid use case of abs() and pointer movement based on comparison with the target.

📌 Completed Day 16 — 84 more to go!
🚀 Getting closer to precision with every problem!

