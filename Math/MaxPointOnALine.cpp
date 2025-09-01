#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;
        int ans = 0;
        for (auto p1 : points) {
            unordered_map<double, int> mp;
            double x1 = p1[0], y1 = p1[1];
            for (auto p2 : points) {
                if (p1 == p2) continue;
                double x2 = p2[0], y2 = p2[1];
                double slope;
                if (x2 - x1 == 0) {
                    slope = INT_MAX;  // vertical line
                } else {
                    slope = (double)(y2 - y1) / (x2 - x1);
                }
                mp[slope]++;
                ans = max(ans, mp[slope]);
            }
        }
        return ans + 1;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> points1 = {{1,1},{2,2},{3,3}};
    cout << sol.maxPoints(points1) << endl; // 3

    vector<vector<int>> points2 = {{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
    cout << sol.maxPoints(points2) << endl; // 4

    return 0;
}
