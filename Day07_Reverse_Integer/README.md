🚀 Problem: Reverse Integer
🔗 Link: Reverse Integer – LeetCode

Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-2³¹, 2³¹ - 1], then return 0.

💡 Intuition:
Reversing digits is straightforward, but the tricky part is avoiding overflow.
Instead of checking for overflow after it happens, we check the condition before adding the next digit.

🔍 Approach:
Use a loop to extract digits one by one from the number using modulus and division.

Before pushing the digit into the reversed number:

Check if it would overflow using INT_MAX and INT_MIN boundaries.

If all safe, multiply rev by 10 and add the digit.

🧮 Time & Space Complexity:
Time Complexity: 
𝑂( log 10(𝑥))
O(log 10(x)) → Because we're processing each digit once.

Space Complexity: 
𝑂(1)
O(1) → No extra space used.

🧠 What I Learned:
Mastered the concept of reversing integers safely in C++.

Gained deeper insight into how integer overflows work in 32-bit environments.

Learned to guard conditions before operations that could break logic.

Got better with C++ edge-case handling with INT_MAX and INT_MIN.