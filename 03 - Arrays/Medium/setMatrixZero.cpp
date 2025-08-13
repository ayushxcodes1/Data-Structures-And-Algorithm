#include <bits/stdc++.h>

using namespace std;

void markRow(vector<vector<int>> &matrix, int row) {
    int cols = matrix[0].size();
    for(int j = 0; j < cols; j++) {
        if(matrix[row][j] != 0) {
           matrix[row][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &matrix, int col) {
    int rows = matrix.size();
    for(int i = 0; i < rows; i++) {
        if(matrix[i][col] != 0) {
           matrix[i][col] = -1;
        }
    }
}

//Brute Force - TC: O((N*M) * (N+M) + (N*M)), SC: O(1)
void setMatrixZero(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    //O(N*M)
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == 0) {
                //O(N + M)
                markRow(matrix, i);
                markCol(matrix, j);
            }
        }
    }

    // Mark all -1 to zero - O(N * M)
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == -1) {
               matrix[i][j] = 0;
            }
        }
    }
}

//Better - TC: O(), SC: O(N * M)
void setMatrixZero(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int col[m] = {0};
    int row[n] = {0};
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