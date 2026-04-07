# Day 32 - Longest Valid Parentheses

## Problem
Find the length of the longest valid parentheses substring.

## Approach
Use stack to store indices:
1. Push -1 initially for base index
2. Push index of '('
3. When ')' appears → pop stack
4. If stack becomes empty → push current index
5. Else calculate valid length

## Time Complexity
O(n)

## Space Complexity
O(n)

## Example
Input:
")()())"

Output:
4