#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // pointer for valid elements
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {3, 2, 2, 3}; // Example input
    int val = 3;

    int k = sol.removeElement(nums, val);

    cout << "k = " << k << endl;
    cout << "Updated array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}