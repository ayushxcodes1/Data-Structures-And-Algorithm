#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX;
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        //Optimization
        if(arr[low] <= arr[high]) return arr[low];
        
        if(arr[low] <= arr[mid]) {
            mini = min(arr[low], mini);
            low = mid + 1;
        }
        else {
            mini = min(arr[mid], mini);
            high = mid - 1;
        }
    }
    return mini;
}

int main() {
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
  int ans = findMin(arr);
  cout << ans;
  return 0;
}    
