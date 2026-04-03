#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dvd = llabs((long long)dividend);
        long long dvs = llabs((long long)divisor);

        int result = 0;

        while (dvd >= dvs) {

            long long temp = dvs;
            int multiple = 1;

            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            dvd -= temp;
            result += multiple;
        }

        if ((dividend < 0) ^ (divisor < 0))
            result = -result;

        return result;
    }
};

int main() {

    Solution sol;

    cout << sol.divide(10,3) << endl;
    cout << sol.divide(7,-3) << endl;
    cout << sol.divide(-2147483648,1) << endl;

    return 0;
}