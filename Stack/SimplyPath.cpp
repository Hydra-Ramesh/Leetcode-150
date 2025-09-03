#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        string token = "";
        stringstream ss(path);
        stack<string> st;
        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") continue;
            if (token != "..") {
                st.push(token);
            } else if (!st.empty()) {
                st.pop();
            }
        }
        if (st.empty()) return "/";
        string result = "";
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> tests = {
        "/home/",
        "/../",
        "/home//foo/",
        "/a/./b/../../c/",
        "/a/../../b/../c//.//"
    };
    for (auto &t : tests)
        cout << t << " -> " << sol.simplifyPath(t) << endl;
}