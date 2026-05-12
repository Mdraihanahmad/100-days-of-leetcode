#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for(int i = 0; i < nums.size() - 1; i++) {

        farthest = max(farthest, i + nums[i]);

        // need another jump
        if(i == currentEnd) {
            jumps++;
            currentEnd = farthest;
        }
    }

    return jumps;
}

int main() {

    vector<int> nums = {2,3,1,1,4};

    cout << jump(nums);

    return 0;
}