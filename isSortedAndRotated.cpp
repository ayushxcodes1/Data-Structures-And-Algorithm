#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> &arr, int n) {
  for(int i = 0; i < n; i++) {
    if(arr[i] > arr[i + 1]) {
      return false;
    }
    return true;
  }
}

int main() {
  vector<int> arr = {3, 4, 5, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  bool res = isSortedAndRotated(arr, n);
  cout << boolalpha << res;
  return 0;
}