#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(vector<int>& nums, int index) {

    if(index == nums.size()) {
        ans.push_back(nums);
        return;
    }

    unordered_set<int> used;

    for(int i = index; i < nums.size(); i++) {

        // skip duplicates
        if(used.count(nums[i])) continue;

        used.insert(nums[i]);

        swap(nums[index], nums[i]);

        solve(nums, index + 1);

        // backtrack
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {

    solve(nums, 0);

    return ans;
}

int main() {

    vector<int> nums = {1,1,2};

    vector<vector<int>> result = permuteUnique(nums);

    for(auto vec : result) {
        for(int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}