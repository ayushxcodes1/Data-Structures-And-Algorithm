#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int maxSubArraySum(vector<int> &arr) {
  int n = arr.size();
  long long maxSum = LONG_MIN;
  for(int i = 0; i < n; i++) {
    long long sum = 0;
    for(int j = i; j < n; j++) {
      sum += arr[j];
      maxSum = max(sum, maxSum);
    }
  }
  return maxSum; 
}

//Optimal - TC: O(N), SC: O(1)
int maxSubArraySum2(vector<int> &arr) {
  int n = arr.size();
  long long sum = 0, maxSum = LONG_MIN;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
    maxSum = max(maxSum, sum);
    if(sum < 0) sum = 0;
  }
  return maxSum; 
} 

//Follow Up - Print the SubArray with Maximum Sum
void printMaxSumSubArray(vector<int> &arr) {
  int n = arr.size();
  long long sum = 0, maxSum = LONG_MIN;
  int start = 0, ansStart = -1, ansEnd = -1;

  for(int i = 0; i < n; i++) {
    if(sum == 0) start = i;
    sum += arr[i];

    if(sum > maxSum) {
      maxSum = sum;
      ansStart = start, ansEnd = i;
    }

    if(sum < 0) {
      sum = 0;
    }
  }
  
  cout << "Subarray With Maximum Sum: ";
  for(int i = ansStart; i <= ansEnd; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
} 

int main() {
  vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
  int res = maxSubArraySum(arr);
  cout << "Max SubArray Sum is " << res << "\n";
 
    int res2 = maxSubArraySum2(arr);
    cout << "Max SubArray Sum is " << res2 << "\n";

    printMaxSumSubArray(arr);

  return 0;
}