#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int maxSubArraySum(vector<int> &arr) {
  int n = arr.size();
  int maxSum = INT_MIN;
  for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = i; j < n; j++) {
      sum += arr[j];
    }
    maxSum = max(sum, maxSum);
  }
  return maxSum; 
}

//Optimal - TC: O(N), SC: O(1)
int maxSubArraySum(vector<int> &arr) {
  int n = arr.size();
  long long sum = 0, maxSum = LONG_MIN;
  for(int i = 0; i < n; i++) {
    sum += arr[i];

    if(sum > maxSum) {
      maxSum = sum;
    }
    if(sum < 0) {
      sum = 0;
    }
  }
  return maxSum; 
} 

//Follow Up - Print the SubArray with Maximum Sum
int print(vector<int> &arr) {
  int n = arr.size();
  long long sum = 0, maxSum = LONG_MIN;
  for(int i = 0; i < n; i++) {
    sum += arr[i];

    if(sum > maxSum) {
      maxSum = sum;
    }
    if(sum < 0) {
      sum = 0;
    }
  }
  return maxSum; 
} 

int main() {
  vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
  int res = maxSubArraySum(arr);
  cout << "Max SubArray Sum is " << res << "\n";

  return 0;
}