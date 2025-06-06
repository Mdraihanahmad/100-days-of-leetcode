#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };

        string result = "";

        for (auto &p : roman) {
    while (num >= p.first) {
        result += p.second;
        num -= p.first;
    }
}
return result;
        }
    };

int main() {
    Solution sol;
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    string roman = sol.intToRoman(number);
    cout << "Roman Numeral: " << roman << endl;

    return 0;
}