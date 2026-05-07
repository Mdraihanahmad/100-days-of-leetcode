#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void solve(vector<int>& candidates, int target, vector<int>& temp, int index) {

    if(target == 0) {
        ans.push_back(temp);
        return;
    }

    for(int i = index; i < candidates.size(); i++) {

        // skip duplicates
        if(i > index && candidates[i] == candidates[i - 1]) {
            continue;
        }

        if(candidates[i] > target) {
            break;
        }

        temp.push_back(candidates[i]);

        solve(candidates, target - candidates[i], temp, i + 1);

        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

    sort(candidates.begin(), candidates.end());

    vector<int> temp;

    solve(candidates, target, temp, 0);

    return ans;
}

int main() {

    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;

    vector<vector<int>> result = combinationSum2(candidates, target);

    for(auto vec : result) {
        for(int x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}