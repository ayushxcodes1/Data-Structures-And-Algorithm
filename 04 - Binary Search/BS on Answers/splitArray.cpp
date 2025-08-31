#include <bits/stdc++.h>

using namespace std;

int findMaxSum(vector<int> &arr, int k, int NoOfELe) {
    int n = arr.size();
    int maxSum = INT_MIN;
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt++;
        sum += arr[i];
        
        if(cnt == NoOfELe){
           maxSum = max(sum, maxSum);
           sum = 0;
           cnt = 0; 
        }

    }

    if(cnt > 0) {
       maxSum = max(sum, maxSum);
    }

    return maxSum;
}

int splitArray(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int NoOfEle = ceil((double)n / k);
    int maxSum = findMaxSum(arr, k, NoOfEle);
    return maxSum;
}

int main() {
  vector<int> arr = {7, 2, 5, 10, 8};
  int k = 2;

  int ans = splitArray(arr, k);
  cout << ans;
  return 0;
}