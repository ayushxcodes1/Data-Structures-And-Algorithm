#include <bits/stdc++.h>

using namespace std;

int findAndCeilFloor(vector<int> &arr, int target) {
  int n = arr.size();
  int floor = -1, ceil = -1;
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

  vector<int> ans = findFloorAndCeil(arr, target);
  for(auto it : ans) {
    cout << it[0] << " " << it[1];
  }

  return 0;
}