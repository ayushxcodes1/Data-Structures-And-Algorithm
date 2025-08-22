#include <bits/stdc++.h>

using namespace std;

int findFloor(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        
    }
}


int main() {
  vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
  int target = 5;

  int ans = findFloor(arr, target);
  cout << "Floor of " << target << "is at index: " << ans;

  return 0;
}