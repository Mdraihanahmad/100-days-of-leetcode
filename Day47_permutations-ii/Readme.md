# Day 47 - Permutations II

## Problem
Generate all unique permutations when duplicates may exist.

## Approach
- Use Backtracking + Swapping
- Use HashSet at each recursion level
- Skip duplicate elements

## Key Concept
Avoid duplicate permutations efficiently.

## Time Complexity
O(n × n!)

## Space Complexity
O(n)

## Example
Input:
[1,1,2]

Output:
[[1,1,2],[1,2,1],[2,1,1]]