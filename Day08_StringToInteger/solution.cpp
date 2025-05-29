#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1, result = 0;

        // 1. Skip leading whitespaces
        while (i < s.length() && s[i] == ' ')
            i++;

        // 2. Handle sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits
        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Check overflow
            if (result > (INT_MAX - digit) / 10)
                return (sign == 1) ? INT_MAX : INT_MIN;

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};
