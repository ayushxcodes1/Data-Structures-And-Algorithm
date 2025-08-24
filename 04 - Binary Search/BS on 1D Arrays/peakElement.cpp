#include <bits/stdc++.h>

using namespace std;

//Linear Search
int findPeakElement(vector<int>& arr) {
  int n = arr.size();

  if(n == 1) return 0;
  if(arr[0] > arr[1]) return 0;
  if(arr[n - 1] > arr[n - 2]) return n - 1;

  for(int i = 1; i < n - 2; i++) {
      
  }
}

int main() {
  vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
  int ans = findPeakElement(arr);
  cout << "Peak Element at index " << ans;
  return 0;
}