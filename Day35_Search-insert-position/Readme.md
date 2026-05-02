# Day 35 - Search Insert Position

## Problem
Find index of target in sorted array or return position where it should be inserted.

## Approach
- Use Binary Search
- If found → return index
- If not found → return left pointer

## Key Insight
Left pointer gives correct insert position after loop ends.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Example
Input:
[1,3,5,6], target = 2

Output:
1