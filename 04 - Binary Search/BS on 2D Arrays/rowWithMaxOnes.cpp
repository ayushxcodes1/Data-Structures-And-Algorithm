#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC:O(N * M), SC: O(1)
int rowWithMaxOnes(vector<vector<int>> &mat) {
  int n = mat.size();
  int m = mat[0].size();
  
  int maxCnt = -1;
  int ind = -1;
  for(int i = 0; i < n; i++) {
    int cnt = 0;
    for(int j = 0; j < m; j++) {
      if(mat[i][j] == 1) cnt++;
    }
    if(cnt > maxCnt) {
      maxCnt = cnt;
      ind = i;
    }
  }
  return ind;
}

//Optimal - TC:O(M * N), SC: O(1)
int lowerBound(vector<int> arr, int n, int x) {
  int low = 0, high = n - 1;
  int ans = -1;
  while(low <= high) {
    int mid = (low + high) / 2;

    if(arr[mid] >= x) {
      ans = mid;
      high = mid - 1;
    }
    else low = mid + 1;
  }
  return ans;
}

int rowWithMaxOnes(vector<vector<int>> &mat) {
  int n = mat.size();
  int m = mat[0].size();
  
  int maxCnt = 0;
  int ind = -1;
  for(int i = 0; i < n; i++) {
    int cnt = m - lowerBound(mat[i], m, 1);
    int ind = -1;
    if(cnt > maxCnt) {
      maxCnt = cnt;
      ind = i;
    }
  }
  return ind;
}

int main() {
  vector<vector<int>> mat = {{0,1,1,1}, 
                             {0,1,1,1}, 
                             {0,0,1,1}, 
                             {0,0,0,0}};

  int ans  = rowWithMaxOnes(mat);
  cout << ans;

  return 0;
}