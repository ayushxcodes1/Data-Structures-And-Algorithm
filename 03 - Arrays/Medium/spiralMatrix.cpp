#include <bits/stdc++.h>

using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;

    //right
    for(int i = left; i <= right; i++) {
        ans.push_back(mat[top][i]);
    }

    //bottom
    for(int i = left; i <= right; i++) {
        ans.push_back(mat[top][i]);
        top++;
    }

    //left

    //top
}

int main() {
  vector<vector<int>> mat = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
  return 0;
}