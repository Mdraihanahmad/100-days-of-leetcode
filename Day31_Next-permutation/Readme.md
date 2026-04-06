# Day 31 - Next Permutation

## Problem
Find the next lexicographically greater permutation of numbers.

If not possible, rearrange numbers into the smallest possible order (ascending).

## Approach
1. Traverse from right to find first decreasing element
2. Find next greater element from right side
3. Swap both elements
4. Reverse the remaining part of array

## Time Complexity
O(n)

## Space Complexity
O(1)

## Example
Input:
[1,2,3]

Output:
[1,3,2]