#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]); // transpose
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end()); // reverse each row
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:\n";
    for(auto &row : matrix){
        for(int x : row) cout << x << " ";
        cout << endl;
    }

    sol.rotate(matrix);

    cout << "\nRotated matrix:\n";
    for(auto &row : matrix){
        for(int x : row) cout << x << " ";
        cout << endl;
    }
}
