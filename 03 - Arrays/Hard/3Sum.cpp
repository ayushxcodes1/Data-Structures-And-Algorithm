#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> ans;

    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                   ans.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }

    return ans;
}

int main() {
  vector<int> arr = {-1, 0, 1, 2, -1, 4};
  vector<vector<int>> ans = threeSum(arr);
  for(auto it : ans) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }
  
  return 0;
}