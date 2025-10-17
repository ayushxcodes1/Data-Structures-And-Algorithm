#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N * M * 4), SC: O(1)
vector<int> findPeakIndex(vector<vector<int>> &mat, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] > mat[i][j - 1] && mat[i][j] > mat[i][j + 1] && 
               mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i + 1][j])
        }
    }
}


int main() {
  vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};

  return 0;
}