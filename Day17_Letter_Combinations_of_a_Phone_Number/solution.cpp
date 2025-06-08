#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> phoneMap = {
            "",     "",     "abc",  "def", 
            "ghi",  "jkl",  "mno", 
            "pqrs", "tuv",  "wxyz"
        };
        
        vector<string> result;
        string current;
        
        backtrack(0, digits, phoneMap, current, result);
        return result;
    }

private:
    void backtrack(int index, const string& digits, const vector<string>& phoneMap, string& current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        string letters = phoneMap[digits[index] - '0'];
        for (char letter : letters) {
            current.push_back(letter);
            backtrack(index + 1, digits, phoneMap, current, result);
            current.pop_back();  // backtrack
        }
    }
};
