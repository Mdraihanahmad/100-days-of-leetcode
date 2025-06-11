#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> matching = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (st.empty() || st.top() != matching[ch]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty(); // Stack should be empty if valid
    }
};
int main() {
    Solution sol;
    string s;
    cout << "Enter string of brackets: ";
    cin >> s;
    
    if (sol.isValid(s)) {
        cout << "Valid Parentheses\n";
    } else {
        cout << "Invalid Parentheses\n";
    }

    return 0;
}
