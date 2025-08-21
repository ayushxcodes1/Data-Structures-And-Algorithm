#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
           return i;
        }
    }
    return -1;
}

int main() {
  vector<int> arr = {-1, 0, 3, 5, 9, 12};
  int ans = search(arr, 9);
  cout << "Target found at index " << ans;
  return 0;
}