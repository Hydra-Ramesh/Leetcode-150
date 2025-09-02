#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, ele = 0;
        for(int num : nums){
            if(count == 0){
                ele = num;
            }
            count += (num == ele) ? 1 : -1;
        }
        return ele;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "Majority element: " << sol.majorityElement(nums) << endl;
    return 0;
}
