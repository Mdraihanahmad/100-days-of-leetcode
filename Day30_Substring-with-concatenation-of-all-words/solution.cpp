#include <bits/stdc++.h>
using namespace std;

vector<int> findSubstring(string s, vector<string>& words) {
    vector<int> result;

    if(s.empty() || words.empty()) return result;

    int wordLen = words[0].size();
    int wordCount = words.size();
    int windowLen = wordLen * wordCount;

    unordered_map<string, int> wordFreq;

    for(string w : words) {
        wordFreq[w]++;
    }

    for(int i = 0; i < wordLen; i++) {
        int left = i;
        int count = 0;
        unordered_map<string, int> seen;

        for(int right = i; right + wordLen <= s.size(); right += wordLen) {

            string word = s.substr(right, wordLen);

            if(wordFreq.count(word)) {

                seen[word]++;
                count++;

                while(seen[word] > wordFreq[word]) {

                    string leftWord = s.substr(left, wordLen);
                    seen[leftWord]--;
                    left += wordLen;
                    count--;
                }

                if(count == wordCount) {
                    result.push_back(left);
                }
            }
            else {

                seen.clear();
                count = 0;
                left = right + wordLen;
            }
        }
    }

    return result;
}

int main() {

    string s = "barfoofoobarthefoobarman";
    vector<string> words = {"bar","foo","the"};

    vector<int> ans = findSubstring(s, words);

    for(int i : ans)
        cout << i << " ";

    return 0;
}