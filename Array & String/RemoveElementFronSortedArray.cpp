#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int l = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[l] != nums[i]){
                l++;
                nums[l] = nums[i];
            }
        }
        return l + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,2,2,3,4,4,5};
    int newLength = sol.removeDuplicates(nums);

    cout << "New length: " << newLength << "\nModified array: ";
    for(int i = 0; i < newLength; i++)
        cout << nums[i] << " ";
    return 0;
}
