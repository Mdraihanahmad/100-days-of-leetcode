# Day 49 - Group Anagrams

## Problem
Group all anagrams together.

## Approach
- Sort each string
- Use sorted string as key in hashmap
- Store original strings in corresponding group

## Key Concept
Anagrams share same sorted representation.

## Time Complexity
O(n × k log k)

## Space Complexity
O(n)
## Example
Input:
["eat","tea","tan","ate","nat","bat"]

Output:
[["eat","tea","ate"],
 ["tan","nat"],
 ["bat"]]