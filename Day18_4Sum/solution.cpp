#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        ++left; --right;
                        while (left < right && nums[left] == nums[left - 1]) ++left;
                        while (left < right && nums[right] == nums[right + 1]) --right;
                    } else if (sum < target) {
                        ++left;
                    } else {
                        --right;
                    }
                }
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 0, -1, 0, -2, 2};  // Example input
    int target = 0;                          // Example target

    vector<vector<int>> result = sol.fourSum(nums, target);

    cout << "Quadruplets summing to " << target << ":\n";
    for (const auto& quad : result) {
        cout << "[ ";
        for (int num : quad) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}