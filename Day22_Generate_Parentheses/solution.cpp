#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void backtrack(vector<string>& result, string current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }
        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max);
        }
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};

// Driver code for local testing
int main() {
    Solution sol;
    int n = 3;
    vector<string> result = sol.generateParenthesis(n);

    cout << "Generated Parentheses for n = " << n << ":\n";
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
