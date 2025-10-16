#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC:O(M * N), SC: O(1)
int rowWithMaxOnes(vector<vector<int>> &mat) {
  int rows = mat.size();
  int cols = mat[0].size();
  
  int maxCnt = INT_MIN;
  int ans = -1;
  for(int i = 0; i < rows; i++) {
    int cnt = 0;
    for(int j = 0; j < cols; j++) {
      if(mat[i][j] == 1) cnt++;
    }
    if(cnt > maxCnt) {
      maxCnt = max(cnt, maxCnt);
      ans = i;
    }
  }
  return ans;
}

int main() {
  vector<vector<int>> mat = {{0,1,1,1}, 
                             {0,0,1,1}, 
                             {1,1,1,1}, 
                             {0,0,0,0}};

  int ans  = rowWithMaxOnes(mat);
  cout << ans;
  
  return 0;
}