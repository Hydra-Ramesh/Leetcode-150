#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;  // last index
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (i + nums[i] >= goal) { // if we can jump to or past the goal
                goal = i;              // move the goal back
            }
        }
        return goal == 0;              // if goal reached start, return true
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 3, 1, 1, 4};
    vector<int> nums2 = {3, 2, 1, 0, 4};

    cout << "Can jump (nums1): " << (sol.canJump(nums1) ? "true" : "false") << endl;
    cout << "Can jump (nums2): " << (sol.canJump(nums2) ? "true" : "false") << endl;

    return 0;
}
