#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC:O(M * N), SC: O(1)
int rowWithMaxOnes(vector<vector<int>> &mat) {
  int rows = mat.size();
  int cols = mat[0].size();
  
  int cnt = 0, maxCnt = INT_MIN;
  int ans = -1;
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      
    }
  }
}

int main() {
  vector<vector<int>> mat = {{0,1,1,1}, 
                             {0,0,1,1}, 
                             {1,1,1,1}, 
                             {0,0,0,0}};
  return 0;
}