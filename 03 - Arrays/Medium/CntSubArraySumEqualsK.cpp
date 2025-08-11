#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^3), SC: O(1)
int maxSubArraySum(vector<int> &arr, int x) {
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
int maxSubArraySum(vector<int> &arr, int k) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
        }
        if(sum == k) cnt++;
    }
    return cnt; 
} 


int main() {
  vector<int> arr = {1, 1, 1};
  int ans = maxSubArraySum(arr, 2);
  cout << ans;
  return 0;
}