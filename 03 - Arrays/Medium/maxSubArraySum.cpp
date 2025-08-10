#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int maxSubArraySum(vector<int> &arr) {
  int n = arr.size();
  int maxSum = 0;
  for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = i; j < n; j++) {
      sum += arr[i];
    }
    maxSum = max(sum, maxSum);
  }
  return maxSum; 
} 

int main() {
  vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
  int res = maxSubArraySum(arr);
  cout << "Max SubArray Sum is " << res << "\n";

  return 0;
}