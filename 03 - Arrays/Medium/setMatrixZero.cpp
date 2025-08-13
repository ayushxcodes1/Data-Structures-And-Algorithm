#include <bits/stdc++.h>

using namespace std;

void markRow(vector<vector<int>> &mat, int row) {
    int cols = mat[0].size();
    for(int j = 0; j < cols; j++) {
        if(mat[row][j] != 0) {
           mat[row][j] = -1;
        }
    }
}

void markCol(vector<vector<int>> &mat, int col) {
    int rows = mat.size();
    for(int i = 0; i < rows; i++) {
        if(mat[i][col] != 0) {
           mat[i][col] = -1;
        }
    }
}

//Brute Force - TC: O((N*M) * (N+M) + (N*M)), SC: O(1)
void setmatZero(vector<vector<int>> &mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    //O(N*M)
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == 0) {
                //O(N + M)
                markRow(mat, i);
                markCol(mat, j);
            }
        }
    }

    // Mark all -1 to zero - O(N * M)
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == -1) {
               mat[i][j] = 0;
            }
        }
    }
}

//Better - TC: O(2*N*M)), SC: O(N + M)
void setmatZero2(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int col[m] = {0};
    int row[n] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] == 0) {
               row[i] = 1;
               col[j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(row[i] || col[j]) {
               mat[i][j] = 0;
            }
        }
    }
}

//Optimal - TC: O(2*N*M)), SC: O(1)
void setmatZero2(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    // int row[n] = {0}; -> mat[...][0]
    // int col[m] = {0}; -> mat[0][...]
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] == 0) {
               //mark the ith row
               //mark the jth col
            }
        }
    }
}

int main() {
    vector<vector<int>> mat = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    setmatZero(mat);
    for (auto &rows : mat) {
        for(int val : rows) {
            cout << val << " ";
        }
        cout << "\n";
    }

    cout << endl;

    mat = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setmatZero2(mat);
    for (auto &rows : mat) {
        for(int val : rows) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}