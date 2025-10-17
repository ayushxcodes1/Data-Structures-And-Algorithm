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

//Better - TC: O(N + logM), SC: O(1)
bool bs(vector<int> arr, int n, int target) {
    int low = 0, high = n - 1;
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

bool searchMatrix2(vector<vector<int>> &mat, int n, int m, int target) {
    for(int i = 0; i < n; i++) {
        if(mat[i][0] <= target && target <= mat[i][m - 1]) {
            return bs(mat[i], m, target);
        }
    }
    return false;
}

//Optimal - TC: O(log(N * M)), SC: O(1)
bool searchMatrix3(vector<vector<int>> &mat, int n, int m, int target) {
    int low = 0, high = n * m - 1;
    while(low <= high) {
       int mid = (low + high) / 2;
       int row = mid / m; 
       int col = mid % m;

       if(mat[row][col] == target) return true;
       else if(mat[row][col] < target) low = mid + 1;
       else high = mid - 1;
    }
    return false;
}

int main() {
  vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  int n = mat.size();
  int m = mat[0].size();

  bool ans = searchMatrix(mat, n, m, 3);
  cout << "Brute: " << ans << endl;

  bool ans2 = searchMatrix2(mat, n, m, 3);
   cout << "Better: " << ans2 << endl;

  bool ans3 = searchMatrix3(mat, n, m, 3);
  cout << "Optimal: " << ans3 << endl;
  return 0;
}