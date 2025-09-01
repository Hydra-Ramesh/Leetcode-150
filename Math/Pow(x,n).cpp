#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, long n) {
        if(n == 0) return 1;
        if(n < 0) return 1 / myPow(x, -n);
        if(n % 2 == 1) return x * myPow(x, n - 1);
        return myPow(x * x, n / 2);
    }
};

int main() {
    Solution sol;

    cout << "2^10 = " << sol.myPow(2, 10) << endl;   // 1024
    cout << "2^-2 = " << sol.myPow(2, -2) << endl;   // 0.25
    cout << "3^5 = " << sol.myPow(3, 5) << endl;     // 243
    cout << "5^0 = " << sol.myPow(5, 0) << endl;     // 1

    return 0;
}
