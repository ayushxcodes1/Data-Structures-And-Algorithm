#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N * M * 4), SC: O(1)
vector<int> findPeakIndex(vector<vector<int>> &mat, int n, int m) { 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int top = (i > 0) ? mat[i - 1][j] : -1;
            int bottom = (i < n - 1) ? mat[i + 1][j] : -1;
            int top = (i > 0) ? mat[i][j - 1] : -1;
            int bottom = (i > 0) ? mat[i][j - 1] : -1;
            if(mat[i][j] > left && mat[i][j] > right && 
               mat[i][j] > top && mat[i][j] > bottom) {
               return {i, j};
            }
        }
    }
    return {-1, -1};
}


int main() {
  vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};

  return 0;
}