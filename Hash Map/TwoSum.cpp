#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int match = target - num;
            if(seen.count(match)){
                return {seen[match], i};
            }
            seen[num] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);
    if(!result.empty()){
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Numbers: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
