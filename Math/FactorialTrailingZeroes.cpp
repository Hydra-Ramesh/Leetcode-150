#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n > 0) {
            n = n / 5;
            count += n;
        }
        return count;
    }
};

int main() {
    Solution sol;

    int n = 100;
    cout << "Trailing zeroes in " << n << "! = " 
         << sol.trailingZeroes(n) << endl;

    return 0;
}
