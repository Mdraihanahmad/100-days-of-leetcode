#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.size() > haystack.size())
            return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {

            int j = 0;

            for (; j < needle.size(); j++) {
                if (haystack[i + j] != needle[j])
                    break;
            }

            if (j == needle.size())
                return i;
        }

        return -1;
    }
};

int main() {

    Solution sol;

    string haystack = "sadbutsad";
    string needle = "sad";

    cout << sol.strStr(haystack, needle);

    return 0;
}