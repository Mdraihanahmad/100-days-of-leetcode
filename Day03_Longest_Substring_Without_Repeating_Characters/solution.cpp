#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> mp;
    int left = 0, right = 0, maxLength = 0;

    while (right < s.length()) {
        if (mp.find(s[right]) != mp.end() && mp[s[right]] >= left) {
            left = mp[s[right]] + 1;
        }
        mp[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
        right++;
    }
    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of Longest Substring Without Repeating Characters: " 
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}
