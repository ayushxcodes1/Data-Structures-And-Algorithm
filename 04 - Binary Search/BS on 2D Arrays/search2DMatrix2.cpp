#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N * M), SC: O(1)
bool searchMatrix(vector<vector<int>> &mat, int n, int m, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] == target) {
               return true;
            }
        }  
    }
    return false;
}

int main() {
  vector<vector<int>> mat = {{1, 4, 7, 11, 15}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int n = mat.size();
  int m = mat[0].size();

  bool ans = searchMatrix(mat, n, m, 3);
  cout << "Brute: " << ans << endl;

  return 0;
}