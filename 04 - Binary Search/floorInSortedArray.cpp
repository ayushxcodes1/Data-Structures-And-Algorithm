#include <bits/stdc++.h>

using namespace std;

int findFloor(vector<int> &arr, int target) {
  int n = arr.size();
  int low = 0, high = n - 1;

  while(low <= high) {
    int mid = (low + (high - low) / 2);
    
    if(arr[mid] <= target) {
      low = mid + 1;
    }
    else if(arr[mid] > target) {
      high = mid - 1;
    }
  }
  
  if(high >= 0) return high;
  else return -1;
}


int main() {
  vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
  int target = 5;

  int ans = findFloor(arr, target);

  if(ans == -1) {
    cout << "Floor of " << target << " doesn't exist in the array";
  }
  else {
  cout << "Floor of " << target << " is at index: " << ans;
  }

  return 0;
}