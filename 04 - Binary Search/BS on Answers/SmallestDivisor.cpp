#include <bits/stdc++.h>

using namespace std;

//Brute Force - Tc(threshold * N)
int findDivisorSum(vector<int> &arr, int n, int d) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ceil((double)arr[i] / d);
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int threshold) {
    int n = arr.size();
    for(int i = 1; i <= threshold; i++) {
        int sum = findDivisorSum(arr, n, i);
        if(sum <= threshold) {
           return i;
        }
    }
}

int main() {
  vector<int> arr = {1, 2, 5, 9};
  int threshold = 6;

  int ans = smallestDivisor(arr, threshold);
  cout << ans;
  
  return 0;
}