#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((sum - max + 1) * N)
int findPages(vector<int> &arr, int pages) {
  int n = arr.size();
  int cntStu = 1;
  int totalPages = 0;
  for(int i = 0; i < n; i++) {
    if(totalPages + arr[i] <= pages) {
      totalPages += arr[i];
    }
    else {
      cntStu++;
      totalPages = arr[i];
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
    if(findPages(arr, i) == k) {
      return i;
    }
  } 
  return -1;
}

//Optimal - TC: O(log(sum - max + 1) * N)
int allocateMinimumPages(vector<int> &arr, int k) {
  int n = arr.size();
  if(k > n) return -1;
  
  int max = *max_element(arr.begin(), arr.end());
  int sum = accumulate(arr.begin(), arr.end(), 0);

  int low = max, high = sum;
  while(low <= high) {
    int mid = low + (high - low) / 2;
    int cntStu = findPages(arr, mid);

    if(cntStu == k) {
      return mid;
    }
    else if(cntStu > k) {
      high = mid - 1;
    }
    else low = mid + 1;
  }
}

int main() {
  vector<int> arr = {12, 34, 67, 90};
  int k = 2;
  
  int ans = allocateMinimumPages(arr, k);
  cout << ans << "\n";
  return 0;
}