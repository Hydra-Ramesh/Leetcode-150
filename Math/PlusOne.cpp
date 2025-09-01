#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;           // normal case
                return digits;
            }
            digits[i] = 0;             // carry over
        }
        digits.insert(digits.begin(), 1); // all 9s case
        return digits;
    }
};

int main() {
    Solution sol;

    vector<int> digits = {9, 9, 9};
    vector<int> result = sol.plusOne(digits);

    cout << "Result: ";
    for(int d : result) cout << d;
    cout << endl;

    return 0;
}
