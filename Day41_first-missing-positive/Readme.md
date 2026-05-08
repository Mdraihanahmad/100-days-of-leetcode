# Day 41 - First Missing Positive

## Problem
Find the smallest missing positive integer.

## Approach
- Place each number at its correct index
- Number x should be at index x-1
- Traverse again to find first mismatch

## Key Insight
Answer always lies in range [1, n+1]

## Time Complexity
O(n)

## Space Complexity
O(1)

## Example
Input:
[3,4,-1,1]

Output:
2