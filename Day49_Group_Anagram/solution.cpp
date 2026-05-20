#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for(string s : strs) {

        string key = s;

        // create sorted key
        sort(key.begin(), key.end());

        mp[key].push_back(s);
    }

    vector<vector<string>> ans;

    for(auto it : mp) {
        ans.push_back(it.second);
    }

    return ans;
}

int main() {

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = groupAnagrams(strs);

    for(auto group : result) {
        for(string word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}