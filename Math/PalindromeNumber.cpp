#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;   // negatives are not palindrome

        int ori = x;
        long long rev = 0;        // use long long for safety

        while(x != 0) {
            int r = x % 10;
            rev = rev * 10 + r;
            x = x / 10;
        }
        return rev == ori;
    }
};

int main() {
    Solution sol;

    int x = 121;
    cout << x << " is palindrome? " 
         << (sol.isPalindrome(x) ? "true" : "false") << endl;

    x = -121;
    cout << x << " is palindrome? " 
         << (sol.isPalindrome(x) ? "true" : "false") << endl;

    x = 10;
    cout << x << " is palindrome? " 
         << (sol.isPalindrome(x) ? "true" : "false") << endl;

    return 0;
}
