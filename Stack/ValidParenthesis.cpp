#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char, char>match = {{')','('}, {']','['}, {'}','{'}};
        for(char c: s){
            if(match.count(c)){
                if(st.empty() || st.top() != match[c]) return false;
                st.pop();
            }else{
                st.push(c);
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    vector<string> tests = {"()", "()[]{}", "(]", "([)]", "{[]}"};
    for (auto &t : tests)
        cout << t << " -> " << (sol.isValid(t) ? "true" : "false") << endl;
}
