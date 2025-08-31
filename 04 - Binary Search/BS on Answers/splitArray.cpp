#include <bits/stdc++.h>

using namespace std;

int findMaxSum(vector<int> &arr, int k, int NoOfELe) {
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(cnt != NoOfELe) {
           cnt++;
           sum += arr[i];
        }
        else {
           maxSum = max(sum, maxSum);
           sum = 0;
           cnt = 0; 
        }
    }
}

int splitArray(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int NoOfEle = ceil((double)n / k);
    int MaxSum = findMaxSum(arr, k, NoOfEle);
  
}

int main() {
  vector<int> arr = {7, 2, 5, 10, 8};
  int k = 2;

  int ans = splitArray(arr, k);
  cout << ans;
  return 0;
}