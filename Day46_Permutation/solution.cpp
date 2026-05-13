#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(vector<int>& nums, int index) {

    if(index == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for(int i = index; i < nums.size(); i++) {

        swap(nums[index], nums[i]);

        solve(nums, index + 1);

        // backtrack
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {

    solve(nums, 0);

    return ans;
}

int main() {

    vector<int> nums = {1,2,3};

    vector<vector<int>> result = permute(nums);

    for(auto vec : result) {
        for(int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}