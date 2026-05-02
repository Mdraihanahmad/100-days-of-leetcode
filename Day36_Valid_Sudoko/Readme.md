# Day 36 - Valid Sudoku

## Problem
Check if a given Sudoku board is valid.

## Approach
- Use 3 hash sets:
  - Rows
  - Columns
  - 3x3 Boxes
- Traverse board:
  - Ignore '.'
  - Check duplicates in row, col, box

## Box Index Formula
(row / 3) * 3 + (col / 3)

## Time Complexity
O(1)

## Space Complexity
O(1)

## Example
Valid Sudoku → true  
Invalid Sudoku → false