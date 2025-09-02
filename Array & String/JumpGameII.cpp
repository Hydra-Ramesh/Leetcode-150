#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int farthest = 0;
        int end = 0;

        for(int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]); // best we can reach
            if(i == end) {                         // reached the end of current jump
                jumps++;
                end = farthest;                    // extend range
            }
        }
        return jumps;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2,3,1,1,4};
    vector<int> nums2 = {2,3,0,1,4};

    cout << "Minimum jumps (nums1): " << sol.jump(nums1) << endl;
    cout << "Minimum jumps (nums2): " << sol.jump(nums2) << endl;

    return 0;
}
