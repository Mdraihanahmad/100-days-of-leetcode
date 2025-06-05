# LeetCode - Longest Common Prefix (Problem 14)

**Link:** [Longest Common Prefix – LeetCode](https://leetcode.com/problems/3sum/submissions/1654630524/)  
**GitHub Repo:** [100-days-of-leetcode](https://github.com/Mdraihanahmad/100-days-of-leetcode.git)  
**Language:** C++


🧠 Approach
Step 1: Sort the array to make two-pointer logic work.

Step 2: Fix one number nums[i], and use two pointers (left and right) to find pairs whose sum = -nums[i].

Step 3: Skip duplicates to avoid duplicate triplets.

Time Complexity: O(n^2)
Efficient for up to thousands of elements.

✨ What I Learned
How to combine sorting + two pointers for optimized search.

Handling duplicate values smartly.

Applying the greedy technique for fixed+pair combination problems.

