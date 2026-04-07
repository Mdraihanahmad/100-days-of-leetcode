#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {

    stack<int> st;
    st.push(-1);

    int maxLen = 0;

    for(int i = 0; i < s.size(); i++) {

        if(s[i] == '(') {
            st.push(i);
        }
        else {

            st.pop();

            if(st.empty()) {
                st.push(i);
            }
            else {
                maxLen = max(maxLen, i - st.top());
            }
        }
    }

    return maxLen;
}

int main() {

    string s = ")()())";

    cout << longestValidParentheses(s);

    return 0;
}