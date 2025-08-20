#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];
    }
    return ans;
}

int main() {
  vector<vector<int>> arr = {{1,3}, {2,6}, {8,10}, {15,18}};

  return 0;
}