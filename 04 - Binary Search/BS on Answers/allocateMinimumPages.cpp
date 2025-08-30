#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((sum - max + 1) * N)
int countStudents(vector<int> &arr, int pages) {
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
    int cntStu = countStudents(arr, i);
    
    if(cntStu == k) { 
      return i;
    }
  } 
  return -1;
}

//Optimal - TC: O(log(sum - max + 1) * N)
int allocateMinimumPages2(vector<int> &arr, int k) {
  int n = arr.size();
  if(k > n) return -1;
  
  int max = *max_element(arr.begin(), arr.end());
  int sum = accumulate(arr.begin(), arr.end(), 0);

  int low = max, high = sum;
  while(low <= high) {
    int mid = low + (high - low) / 2;
    int cntStu = countStudents(arr, mid);

    if(cntStu == k) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }
  return low;
}

int main() {
  vector<int> arr = {12, 34, 67, 90};
  int k = 2;
  
  int ans = allocateMinimumPages(arr, k);
  cout << ans << "\n";

  int ans2 = allocateMinimumPages2(arr, k);
  cout << ans2 << "\n";
  return 0;
}