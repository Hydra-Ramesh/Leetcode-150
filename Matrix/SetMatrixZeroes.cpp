#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool firstRowZero = false, firstColZero = false;

        // Check if first row has a zero
        for (int j = 0; j < n; j++)
            if (matrix[0][j] == 0) firstRowZero = true;

        // Check if first column has a zero
        for (int i = 0; i < m; i++)
            if (matrix[i][0] == 0) firstColZero = true;

        // Mark rows and columns in the first cell of each
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Zero out cells based on marks
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        // Zero first row if needed
        if (firstRowZero)
            for (int j = 0; j < n; j++) matrix[0][j] = 0;

        // Zero first column if needed
        if (firstColZero)
            for (int i = 0; i < m; i++) matrix[i][0] = 0;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:\n";
    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }

    sol.setZeroes(matrix);

    cout << "\nMatrix after setZeroes:\n";
    for (auto &row : matrix) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }

    return 0;
}
