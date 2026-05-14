# Day 46 - Permutations

## Problem
Generate all possible permutations of distinct integers.

## Approach
Use Backtracking:
- Swap current element
- Recurse for next index
- Undo swap after recursion

## Key Concept
Backtracking + Swapping

## Time Complexity
O(n × n!)

## Space Complexity
O(n)

## Example
Input:
[1,2,3]
Output:
[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]