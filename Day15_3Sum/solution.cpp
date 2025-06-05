#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Loop through each element
        for (int i = 0; i < nums.size() - 2; ++i) {
            // Skip duplicate values
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;

            // Step 3: Use two pointers to find the triplet
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Move pointers and skip duplicates
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++;  // Increase the sum
                } 
                else {
                    right--; // Decrease the sum
                }
            }
        }
        return result;
    }
};
