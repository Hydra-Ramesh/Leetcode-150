#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[l++] = nums[i];
            }
        }
        return l;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,2,3,4,3,5};
    int val = 3;
    int newLength = sol.removeElement(nums, val);

    cout << "New length: " << newLength << "\nModified array: ";
    for(int i = 0; i < newLength; i++)
        cout << nums[i] << " ";
    return 0;
}
