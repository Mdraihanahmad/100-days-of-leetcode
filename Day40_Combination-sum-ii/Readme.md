# Day 40 - Combination Sum II

## Problem
Find all unique combinations where numbers sum to target.

Each element can be used only once.

## Approach
- Sort array
- Use Backtracking
- Skip duplicate elements
- Move to next index after taking element

## Key Concept
Backtracking + Duplicate Handling

## Time Complexity
Exponential

## Space Complexity
O(target)

## Example
Input:
[10,1,2,7,6,1,5], target = 8

Output:
[[1,1,6],[1,2,5],[1,7],[2,6]]