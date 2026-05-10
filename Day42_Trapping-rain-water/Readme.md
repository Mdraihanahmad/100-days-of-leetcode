# Day 42 - Trapping Rain Water

## Problem
Find total water trapped between bars after rain.

## Approach
- Use Two Pointers
- Track leftMax and rightMax
- Water trapped:
  min(leftMax, rightMax) - height[i]

## Key Insight
Smaller boundary determines trapped water.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Example
Input:
[0,1,0,2,1,0,1,3,2,1,2,1]

Output:
6