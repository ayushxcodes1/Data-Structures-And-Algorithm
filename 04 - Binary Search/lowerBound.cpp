#include <bits/stdc++.h>

using namespace std;

//Binary Search
int lowerBound(vector<int> &arr, int low, int high, int target) {
    int n = arr.size();
    int ans = n;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] >= target) {
           ans = mid;
           high = mid - 1;
        }
        else {  
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
  vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
  int n = arr.size();
  int target = 9;

  int ans = lowerBound(arr, 0, n - 1, target);
  cout << "Lower bound of " << target << " is at index: " << ans << "\n";

  //Using STL
  auto it = lower_bound(arr.begin(), arr.end(), target);
  int index = it - arr.begin();
  cout << "Lower bound of " << target << " is at index: " << index;
  
  return 0;
}