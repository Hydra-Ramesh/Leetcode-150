#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r = s.length()-1;
        while(l<r){
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<string> tests = {
        "A man, a plan, a canal: Panama",
        "race a car",
        " ",
        "No lemon, no melon"
    };
    for (auto &t : tests)
        cout << "\"" << t << "\" -> " 
             << (sol.isPalindrome(t) ? "true" : "false") << endl;
}
