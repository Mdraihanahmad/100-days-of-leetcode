#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(vector<int>& candidates, int target, vector<int>& temp, int index) {

    if(target == 0) {
        ans.push_back(temp);
        return;
    }

    if(target < 0 || index >= candidates.size()) {
        return;
    }

    // include current element
    temp.push_back(candidates[index]);

    solve(candidates, target - candidates[index], temp, index);

    temp.pop_back();

    // exclude current element
    solve(candidates, target, temp, index + 1);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

    vector<int> temp;

    solve(candidates, target, temp, 0);

    return ans;
}

int main() {

    vector<int> candidates = {2,3,6,7};
    int target = 7;

    vector<vector<int>> result = combinationSum(candidates, target);

    for(auto vec : result) {
        for(int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}