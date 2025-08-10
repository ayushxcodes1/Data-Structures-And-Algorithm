#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
vector<int> TwoSum(vector<int> &arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
               return {i, j};
            } 
        }
    }
    return {};
} 

//Optimal - TC: O(NlogN), SC: O(N)
vector<int> TwoSum2(vector<int> &arr, int target) {
    int n = arr.size();
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        int ele = arr[i];
        int more = target - ele;
        if(mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[ele] = i;
    }
    return {};
}

int main() {
  vector<int> arr = {2, 7, 11, 15};
  TwoSum(arr, 9);
  
  vector<int> res = TwoSum(arr, 9);
  for(auto it : res) {
    cout << "[" << res[0] << "," << res[1] << "]";
  }

  vector<int> res2 = TwoSum2(arr, 9);
  for(auto it : res2) {
    cout << "[" << res2[0] << "," << res2[1] << "]";
  }
  return 0;
}