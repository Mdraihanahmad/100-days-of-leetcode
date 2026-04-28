# Day 34 - Find First and Last Position of Element in Sorted Array

## Problem
Find first and last position of target in sorted array.

## Approach
- Use Binary Search twice:
  1. Find first occurrence
  2. Find last occurrence
- Modify condition to move left/right accordingly

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Example
Input:
[5,7,7,8,8,10], target = 8

Output:
[3,4]