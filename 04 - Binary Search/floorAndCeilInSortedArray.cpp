#include <bits/stdc++.h>

using namespace std;

vector<int> findFloorAndCeil(vector<int> &arr, int target) {
  int n = arr.size();
  int low = 0, high = n - 1;

  while(low <= high) {
    int mid = (low + (high - low) / 2);
    
    if(arr[mid] == target) {
      return {target, target};
    }
    else if(arr[mid] <= target) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  
  int floor = (high >= 0 ? arr[high] : -1);
  int ceil = (low >= 0 ? arr[low] : -1);

  return {floor, ceil};
}

int main() {
  vector<int> arr = {3, 4, 4, 7, 8, 10};
  int target = 5;

  vector<int> ans = findFloorAndCeil(arr, target);
  cout << "[" << ans[0] << "," << ans[1] << "]";

  return 0;
}