#include <iostream>
#include <vector>

using namespace std;

// Solution class
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through each element
        for (int i = 0; i < nums.size(); i++) {
            // Compare with every other element
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the sum is equal to target
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return indices
                }
            }
        }
        return {}; // Return empty if no pair found
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;  // Create object of Solution
    vector<int> result = sol.twoSum(nums, target);  // Call twoSum function

    // Print result
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}
