#include <bits/stdc++.h>

using namespace std;

//Linear Search
int findPeakElement(vector<int>& arr) {
  int n = arr.size();

  for(int i = 0; i < n; i++) {
    if((i == 0 || arr[i - 1] < arr[i]) &&
      (i == n - 1 || arr[i] > arr[i + 1])) {
      return i;
    }
  }
  return -1;
} 

//Binary Search
int findPeakElement2(vector<int>& arr) {
  int n = arr.size();

  if(n == 1) return 0;
  if(arr[0] > arr[1]) return 0;
  if(arr[n - 1] > arr[n - 2]) return n - 1;
  
  int low = 1, high = n - 2;
  while(low <= high) {
    int mid = (low + (high - low) / 2);

    //peak at mid
    if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
      return mid;
    }

    //peak on left
    if(arr[mid] < arr[mid - 1]) {
      high = mid - 1;
    }

    //peak on right
    else {
      return low = mid + 1;
    }
  }

  return -1;
}

int main() {
  vector<int> arr = {1, 2, 1, 3, 5, 6, 4};

  int ans = findPeakElement(arr);
  cout << "Peak Element found at index " << ans << "\n";

  int ans2 = findPeakElement2(arr);
  cout << "Peak Element found at index " << ans2;

  return 0;
}