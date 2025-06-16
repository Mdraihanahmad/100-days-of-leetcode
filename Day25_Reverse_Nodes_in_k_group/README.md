Day 25 - Reverse Nodes in k-Group
Problem: Reverse Nodes in k-Group – LeetCode #25
Difficulty: Hard
Topic: Linked List, Recursion

🧠 Problem Statement:
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.
If the number of nodes is not a multiple of k, then the remaining nodes should remain as it is.
🔸 You may not change the node values—only the nodes themselves may be changed.

📥 Input:
head = [1, 2, 3, 4, 5]

k = 2

📤 Output:
[2, 1, 4, 3, 5]

💡 Approach:
Traverse ahead k steps to ensure enough nodes are available.
If yes, reverse the first k nodes using classic pointer manipulation.
Recursively call the function on the remaining part of the list.
Link the end of the reversed part to the result of the recursive call.

Key Concepts:
Reversing a linked list in chunks of size k

Recursion
Edge case handling (remaining nodes less than k)

🔗 Related Problems:
Swap Nodes in Pairs (#24)
Reverse Linked List (#206)
