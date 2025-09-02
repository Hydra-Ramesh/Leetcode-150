#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle if k >= n
        reverse(nums.begin(), nums.end());          // Step 1
        reverse(nums.begin(), nums.begin() + k);    // Step 2
        reverse(nums.begin() + k, nums.end());      // Step 3
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) cout << num << " ";
    return 0;
}
