# Day 38 - Count and Say

## Problem
Generate nth term of count-and-say sequence.

## Approach
- Start from "1"
- For each step:
  - Count consecutive digits
  - Build new string

## Key Concept
Run-Length Encoding (RLE)

## Time Complexity
O(n × length of string)

## Space Complexity
O(n)

## Example
n = 4

Output:
"1211"