🧠 Problem Statement

Given an integer array nums and an integer val, remove all occurrences of val in-place.
The relative order of elements may change.
Return the number of elements in nums which are not equal to val.

After removing elements:

The first k elements should contain valid values
The remaining elements do not matter
🧩 Approach
Use two pointers:
One pointer i to iterate through the array
One pointer k to track the position of valid elements
If nums[i] != val, place it at index k
Increase k
Return k as the count of elements not equal to val
💻 Example

Input:

nums = [3,2,2,3], val = 3

Output:

k = 2
nums = [2,2,_,_]
⏱ Complexity
Time Complexity: O(n)
Space Complexity: O(1) (in-place modification)
📂 GitHub Repo
https://github.com/Mdraihanahmad/100-days-of-leetcode.git