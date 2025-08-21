#include <bits/stdc++.h>

using namespace std;

//Linear Search
int lowerBound(vector<int> &arr, int x) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
           return i;
        }
    }
    return n;
}

//Binary Search
int lowerBound2(vector<int> &arr, int low, int high, int x) {
    int n = arr.size();
    int ans = 0;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] >= x) {
           ans = min(ans, mid);
           high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return n;
}

int main() {
  vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
  int n = arr.size();

  int ans = lowerBound(arr, 9);
  cout << ans << "\n";

  int ans2 = lowerBound2(arr, 0, n - 1, 9);
  cout << ans2;
  return 0;
}