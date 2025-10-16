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

//Optimal - TC: O(N * M), SC: O(1)
bool search(vector<int> arr, int m, int target) {
    int low = 0, high = m - 1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
           return true;
        } 
        else if(arr[mid] > target) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &mat, int n, int m, int target) {
    for(int i = 0; i < n; i++) {
        bool ans = search(mat[i], m, target);
    }
    return false;
}

int main() {
  vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int n = mat.size();
  int m = mat[0].size();

  bool ans = searchMatrix(mat, n, m, 3);
  cout << ans;
  return 0;
}