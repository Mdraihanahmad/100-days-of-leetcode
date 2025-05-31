#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return helper(0, 0, s, p, dp);
    }

    bool helper(int i, int j, string& s, string& p, vector<vector<int>>& dp) {
        if (dp[i][j] != -1)
            return dp[i][j];

        if (j == p.size())
            return dp[i][j] = (i == s.size());

        bool match = (i < s.size() && (s[i] == p[j] || p[j] == '.'));

        if (j + 1 < p.size() && p[j + 1] == '*') {
            // '*' can mean: use 0 of the previous char, or use 1+ if it matches
            dp[i][j] = helper(i, j + 2, s, p, dp) || (match && helper(i + 1, j, s, p, dp));
        } else {
            dp[i][j] = match && helper(i + 1, j + 1, s, p, dp);
        }

        return dp[i][j];
    }
};

int main() {
    Solution sol;

    // Test case 1
    string s1 = "aa", p1 = "a";
    cout << "Test 1: " << sol.isMatch(s1, p1) << endl;  // Output: 0 (false)

    // Test case 2
    string s2 = "aa", p2 = "a*";
    cout << "Test 2: " << sol.isMatch(s2, p2) << endl;  // Output: 1 (true)

    return 0;
}