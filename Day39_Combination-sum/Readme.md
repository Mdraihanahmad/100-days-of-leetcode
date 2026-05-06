# Day 39 - Combination Sum

## Problem
Find all unique combinations where numbers sum to target.

## Approach
Use Backtracking:
- Include current element
- Exclude current element
- Reuse same element multiple times

## Key Concept
Backtracking + Recursion

## Time Complexity
Exponential

## Space Complexity
O(target)

## Example
Input:
[2,3,6,7], target = 7

Output:
[[2,2,3],[7]]