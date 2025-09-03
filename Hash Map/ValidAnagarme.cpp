#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int freq[26] = {0};  // For lowercase letters only

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }

        return true;
    }
};

int main() {
    Solution sol;
    vector<pair<string,string>> tests = {
        {"anagram", "nagaram"},
        {"rat", "car"},
        {"listen", "silent"},
        {"hello", "bello"}
    };

    for (auto &p : tests) {
        cout << "\"" << p.first << "\" and \"" << p.second 
             << "\" -> " << (sol.isAnagram(p.first, p.second) ? "true" : "false") 
             << endl;
    }

    return 0;
}
