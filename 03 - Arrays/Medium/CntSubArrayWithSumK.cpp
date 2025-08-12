#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^3), SC: O(1)
int cntSubArray(vector<int> &arr, int x) {
  int n = arr.size();
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      int sum = 0;
      for(int k = i; k <= j; k++){
        sum += arr[k];
      }
      if(sum == x) cnt++;
    }
  }
  return cnt; 
}

//Better - TC: O(N^2), SC: O(1)
int cntSubArray2(vector<int> &arr, int k) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
          sum += arr[j];
          if(sum == k) cnt++;
        }
    }
    return cnt; 
} 

//Optimal - TC: O(N * logN), SC: O(1)
int cntSubArray3(vector<int> &arr, int k) {
  int n = arr.size();
  map<int, int> mpp;
  mpp[0] = 1;
  int preSum = 0, cnt = 0;
  for(int i = 0; i < n; i++) {
    preSum += arr[i];
    int remove = preSum - k;
    cnt += mpp[remove];
    mpp[preSum] += 1;
  }
  
  return cnt;
} 

int main() {
  vector<int> arr = {1, 1, 1};
  int ans = cntSubArray(arr, 2);
  cout << ans;

  cout << endl;

  int ans2 = cntSubArray2(arr, 2);
  cout << ans2;

  cout << endl;

  int ans3 = cntSubArray3(arr, 2);
  cout << ans3;
  return 0;
}