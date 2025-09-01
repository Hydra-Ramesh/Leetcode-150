#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& nums, int idx, vector<int>& dp) {
        if (idx >= nums.size()) return 0;
        if (dp[idx] != -1) return dp[idx];

        int robCurr = nums[idx] + helper(nums, idx + 2, dp);
        int skipCurr = helper(nums, idx + 1, dp);

        return dp[idx] = max(robCurr, skipCurr);
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return helper(nums, 0, dp);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of houses: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter money in each house: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum money that can be robbed = " 
         << sol.rob(nums) << endl;

    return 0;
}
