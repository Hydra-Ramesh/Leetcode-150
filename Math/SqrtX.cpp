#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        int lo = 2, hi = x / 2;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            long long num = 1LL * mid * mid;
            if(num == x) return mid;
            else if(num < x) lo = mid + 1;
            else hi = mid - 1;
        }
        return hi;
    }
};

int main() {
    Solution sol;
    cout << "sqrt(4) = " << sol.mySqrt(4) << endl;   // 2
    cout << "sqrt(8) = " << sol.mySqrt(8) << endl;   // 2
    cout << "sqrt(25) = " << sol.mySqrt(25) << endl; // 5
    cout << "sqrt(1) = " << sol.mySqrt(1) << endl;   // 1
    return 0;
}
