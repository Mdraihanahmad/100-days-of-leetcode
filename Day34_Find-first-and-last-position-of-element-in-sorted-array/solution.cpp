#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int ans = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            ans = mid;
            right = mid - 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}

int findLast(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    int ans = -1;

    while(left <= right) {
        int mid = left + (right - left) / 2;

        if(nums[mid] == target) {
            ans = mid;
            left = mid + 1;
        }
        else if(nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
    return {findFirst(nums, target), findLast(nums, target)};
}

int main() {

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}