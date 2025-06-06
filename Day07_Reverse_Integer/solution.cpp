#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;

        while (x != 0)
        {
            int digit = x % 10;
            x /= 10;

            // Check for overflow before it happens
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }
};

int main()
{
    Solution sol;

    int input;
    cout << "Enter an integer: ";
    cin >> input;

    int result = sol.reverse(input);
    cout << "Reversed Integer: " << result << endl;

    return 0;
}
