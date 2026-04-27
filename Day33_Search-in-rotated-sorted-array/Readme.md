# Day 33 - Search in Rotated Sorted Array

## Problem
Search target in rotated sorted array with O(log n) time.

## Approach
- Use Binary Search
- At each step:
  - Check which half is sorted
  - Decide where target lies
  - Move accordingly

## Key Insight
At least one half is always sorted.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Example
Input:
[4,5,6,7,0,1,2], target = 0
Output:
4