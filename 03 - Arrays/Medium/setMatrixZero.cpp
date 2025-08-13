#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> setMatrixZero(vector<vector<int>> &matrix) {
   int rows = matrix.size();
   int cols = matrix[0].size();
   for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
        matrix[1][j] = 0;
        matrix[i][1] = 0; 
    }
   }
}

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    vector<vector<int>> ans = setMatrixZero(matrix);
    for (const auto &rows : matrix) {
        for (int val : rows) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}