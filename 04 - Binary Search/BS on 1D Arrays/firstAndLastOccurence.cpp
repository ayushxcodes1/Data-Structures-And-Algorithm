#include <bits/stdc++.h>

using namespace std;

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

int upperBound(vector<int> &arr, int low, int high, int target) {
    int n = arr.size();
    int ans = n;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] > target) {
           ans = mid;
           high = mid - 1;
        }
        else {  
            low = mid + 1;
        }
    }
    return ans;
}

vector<int> firstAndLastPosition(vector<int> &arr, int n, int target) {
    int stIndex = lowerBound(arr, 0, n - 1, target);
    int endIndex = upperBound(arr, 0, n - 1, target) - 1;

    if((stIndex == n) || arr[stIndex] != target) {
        return {-1, -1};
    }

    return {stIndex, endIndex};
}

int main() {
  vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
  int n = arr.size();
  int target = 10;

  vector<int> ans = firstAndLastPosition(arr, n, target);
  cout << "[" << ans[0] << "," << ans[1] << "]";

  return 0;
}