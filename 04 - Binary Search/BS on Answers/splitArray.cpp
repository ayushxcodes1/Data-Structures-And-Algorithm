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

int findPages(vector<int> &arr, int n, int k) {
  if(k > n) return -1; //impossible case
  
  int maxi = *max_element(arr.begin(), arr.end());
  int sum = accumulate(arr.begin(), arr.end(), 0);
  for(int i = maxi; i <= sum; i++) {
    int cntStu = countStudents(arr, i);
    
    if(cntStu == k) { 
      return i;
    }
  } 
  return -1;
}

int splitArray(vector<int> &arr, int k) {
    return findPages(arr, arr.size(), k);
}

int main() {
  vector<int> arr = {7, 2, 5, 10, 8};
  int k = 2;

  int ans = splitArray(arr, k);
  cout << ans;
  return 0;
}