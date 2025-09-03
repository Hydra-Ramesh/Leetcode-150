#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};

int main() {
    Solution sol;
    vector<pair<string,string>> tests = {
        {"abc", "ahbgdc"},
        {"axc", "ahbgdc"},
        {"", "ahbgdc"},
        {"abc", ""},
        {"ace", "abcde"}
    };
    for (auto &p : tests)
        cout << "\"" << p.first << "\" in \"" << p.second 
             << "\" -> " << (sol.isSubsequence(p.first, p.second) ? "true" : "false") << endl;
}
