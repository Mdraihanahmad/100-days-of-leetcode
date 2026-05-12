# Day 44 - Wildcard Matching

## Problem
Implement wildcard matching with:
- '?' → matches single character
- '*' → matches any sequence

## Approach
Use Dynamic Programming:
- dp[i][j] stores matching state
- Handle:
  - exact match
  - '?'
  - '*'

## Key Concept
Pattern Matching using DP

## Time Complexity
O(n × m)

## Space Complexity
O(n × m)

## Example
Input:
s = "aa"
p = "*"

Output:
true