# Day 37 - Sudoku Solver

## Problem
Solve a Sudoku puzzle using backtracking.

## Approach
- Use recursion + backtracking
- For each empty cell:
  - Try digits 1-9
  - Check validity
  - Place and recurse
  - If fails → backtrack

## Key Concept
Backtracking = Try → Check → Undo

## Time Complexity
Exponential (worst case)

## Space Complexity
O(1)

## Example
Input: Partially filled board  
Output: Fully solved valid Sudoku