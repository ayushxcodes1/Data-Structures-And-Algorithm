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
int lowerBound(vector<int> &arr, int low, int high, int x) {
    int n = arr.size();
    int ans = n;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] >= x) {
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
  
  int ans = lowerBound(arr, 0, n - 1, 9);
  cout << ans;
  return 0;
}