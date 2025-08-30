#include <bits/stdc++.h>

using namespace std;

int allocateMinimumPages(vector<int> &arr, int k) {
  int n = arr.size();
  int max = *max_element(arr.begin(), arr.end());
  int sum = accumulate(arr.begin(), arr.end(), 0);
  for(int i = max; i <= sum; i++) {
      
  }
    
}

int main() {
  vector<int> arr = {12, 34, 67, 90};
  int k = 2;
  
  int ans = allocateMinimumPages(arr, k);
  cout << ans << "\n";
  return 0;
}