#include <bits/stdc++.h>

using namespace std;

int findPages(vector<int> &arr, int pages) {
  int n = arr.size();
  int cntStu = 1;
  int totalPages = arr[0];
  for(int i = 1; i < n; i++) {
    if(totalPages >= pages) {
      cntStu++;
      totalPages = 0;
    }
    else {
      totalPages += arr[i];
    }
  }
  return cntStu;
}

int allocateMinimumPages(vector<int> &arr, int k) {
  int n = arr.size();
  if(k > n) return -1;
  
  int max = *max_element(arr.begin(), arr.end());
  int sum = accumulate(arr.begin(), arr.end(), 0);
  for(int i = max; i <= sum; i++) {
    if(findPages(arr, i, k) == false) {
      return (i - 1);
    }
  } 
  return -1;
}

int main() {
  vector<int> arr = {12, 34, 67, 90};
  int k = 2;
  
  int ans = allocateMinimumPages(arr, k);
  cout << ans << "\n";
  return 0;
}