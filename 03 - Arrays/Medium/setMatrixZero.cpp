#include <bits/stdc++.h>

using namespace std;

void markRow(vector<vector<int>> &matrix, int rows, int i, int j) {
    for(int i = 0; i < rows; j++) {
        if(matrix[i][j] != 0) {
           matrix[i][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int cols, int i, int j) {
    for(int i = 0; i < cols; j++) {
        if(matrix[i][j] != 0) {
           matrix[i][j] = -1;
        }
    }
}

//Brute Force - TC: O(N^2), SC: O(1)
void setMatrixZero(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] = 0) {
                markRow(matrix, i, j, rows);
                markCol(matrix, i, j, cols);
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    setMatrixZero(matrix);
    for (auto &rows : matrix) {
        for(int val : rows) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}