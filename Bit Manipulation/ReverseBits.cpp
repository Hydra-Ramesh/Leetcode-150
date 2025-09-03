#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        int rev = 0;
        for (int i = 0; i < 32; i++) {
            rev = rev << 1;               // shift left to make space
            int lastBit = n & 1;          // extract last bit of n
            rev = rev | lastBit;          // insert it into rev
            n = n >> 1;                   // shift n right to process next bit
        }
        return rev;
    }
};

int main() {
    Solution sol;

    int n = 43261596; // Example input
    int result = sol.reverseBits(n);

    cout << "Original: " << n << endl;
    cout << "Reversed: " << result << endl;

    return 0;
}
