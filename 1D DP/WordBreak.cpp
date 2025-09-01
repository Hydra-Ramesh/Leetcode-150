#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool helper(string &s, int start, unordered_set<string>& dict, vector<int>& dp) {
        if (start == s.size()) return true;
        if (dp[start] != -1) return dp[start];

        for (int end = start + 1; end <= s.size(); end++) {
            if (dict.count(s.substr(start, end - start)) && helper(s, end, dict, dp)) {
                return dp[start] = true;
            }
        }
        return dp[start] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<int> dp(s.size(), -1); // -1 = uncomputed, 0 = false, 1 = true
        return helper(s, 0, dict, dp);
    }
};

int main() {
    Solution sol;
    string s;
    int n;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter number of words in dictionary: ";
    cin >> n;

    vector<string> dict(n);
    cout << "Enter dictionary words: ";
    for (int i = 0; i < n; i++) cin >> dict[i];

    bool canBreak = sol.wordBreak(s, dict);

    cout << (canBreak ? "YES, can be segmented." : "NO, cannot be segmented.") << endl;

    return 0;
}
