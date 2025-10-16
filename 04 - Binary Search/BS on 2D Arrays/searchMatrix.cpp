#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int n, int m) {

}

int main() {
  vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int n = mat.size();
  int m = mat[0].size();
  bool ans = searchMatrix(mat, n, m);
  return 0;
}