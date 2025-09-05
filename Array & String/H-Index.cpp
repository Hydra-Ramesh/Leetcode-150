#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int n = citations.size();
        int idx = 0;
        while (idx < n && citations[idx] > idx) {
            idx++;
        }
        return idx;
    }
};

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};

    Solution s;
    cout << "H-Index: " << s.hIndex(citations) << endl;

    return 0;
}
