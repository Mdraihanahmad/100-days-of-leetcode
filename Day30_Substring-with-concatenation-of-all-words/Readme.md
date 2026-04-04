# Day 30 - Substring with Concatenation of All Words

## Problem
Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.

## Approach
- Use HashMap to store word frequency
- Use Sliding Window of size wordLength * numberOfWords
- Move window in steps of wordLength
- Track frequency of words inside window
- If frequency matches → valid index found

## Time Complexity
O(N × wordLength)

## Space Complexity
O(N)

## Example
Input:
s = "barfoofoobarthefoobarman"
words = ["bar","foo","the"]

Output:
[6,9,12]