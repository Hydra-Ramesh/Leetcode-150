#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_current = nums[0];
        int max_global = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            max_current = max(nums[i], max_current + nums[i]);
            if (max_current > max_global) {
                max_global = max_current;
            }
        }
        return max_global;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> tests = {
        {-2,1,-3,4,-1,2,1,-5,4},
        {1},
        {5,4,-1,7,8},
        {-1,-2,-3,-4}
    };

    for (auto &nums : tests) {
        cout << "Array: ";
        for (int x : nums) cout << x << " ";
        cout << "\nMax Subarray Sum: " << sol.maxSubArray(nums) << "\n\n";
    }

    return 0;
}
