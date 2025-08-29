#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N), SC: O(1)
int findKthMissing(vector<int> &arr, int k) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] <= k) k++;
        else break;
    }
    return k;
}

//Optimal - TC: O(logN), SC: O(1)
int findKthMissing2(vector<int> &arr, int k) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int missing = arr[mid] - (mid + 1);
        if(missing < k) {
           low = mid + 1;
        } 
        else high = mid - 1;
    }
    return low + k;
}

int main() {
  vector<int> arr = {2, 3, 4, 7, 11};
  int k = 5;

  int ans = findKthMissing(arr, k);
  cout << "Missing Number is " << ans << "\n";

  int ans2 = findKthMissing2(arr, k);
  cout << "Missing Number is " << ans2;
  return 0;
}