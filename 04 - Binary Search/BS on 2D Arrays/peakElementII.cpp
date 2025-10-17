#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N * M), SC: O(1)
vector<int> findPeakIndex(vector<vector<int>> &mat, int n, int m) { 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int top = (i > 0) ? mat[i - 1][j] : -1;
            int bottom = (i < n - 1) ? mat[i + 1][j] : -1;
            int left = (j > 0) ? mat[i][j - 1] : -1;
            int right = (j < m - 1) ? mat[i][j + 1] : -1;

            if(mat[i][j] > left && mat[i][j] > right && 
               mat[i][j] > top && mat[i][j] > bottom) {
               return {i, j};
            }
        }
    }
    return {-1, -1};
}

//Better - TC: O(N * M), SC: O(1)
pair<int, int> findPeakIndex2(vector<vector<int>> &mat, int n, int m) { 
    int maxValue = INT_MIN;
    pair<int,int> peak;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] > maxValue) {
                maxValue = mat[i][j];
                peak = {i, j};
            }
        }
    }
    return peak;
}

//Optimal - TC: O(N * logM), SC: O(1)
int findMaxIndex(vector<vector<int>> &mat, int n, int m, int col) {
    int maxValue = -1;
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(mat[i][col] > maxValue) {
           maxValue = mat[i][col];
           index = i;
        }
    }
    return index;
}

vector<int> findPeakIndex3(vector<vector<int>> &mat, int n, int m) { 
    int low = 0, high = m - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        int maxRowIndex = findMaxIndex(mat, n, m, mid);
        int left = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 < m ? mat[maxRowIndex][mid + 1] : -1;
        if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) {
           return {maxRowIndex, mid};
        }
        else if(mat[maxRowIndex][mid] < left) {
           high = mid - 1;
        }
        else low = mid + 1;
    }
    return {-1, -1};
}


int main() {
  vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
  int n = mat.size();
  int m = mat[0].size();

  vector<int> ans = findPeakIndex(mat, n, m);
  cout << "Brute: {" << ans[0] << "," << ans[1] << "}" << endl;

  vector<int> ans = findPeakIndex(mat, n, m);
  cout << "Better: {" << ans[0] << "," << ans[1] << "}" << endl;
  
  vector<int> ans = findPeakIndex(mat, n, m);
  cout << "{" << ans[0] << "," << ans[1] << "}";

  return 0;
}