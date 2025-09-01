#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(int n, vector<int>& dp) {
        if (n == 0 || n == 1) return 1;
        if (dp[n] != -1) return dp[n];
        return dp[n] = helper(n-1, dp) + helper(n-2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return helper(n, dp);
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Number of ways to climb " << n << " stairs = " 
         << sol.climbStairs(n) << endl;

    return 0;
}
