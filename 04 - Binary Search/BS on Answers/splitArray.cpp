#include <bits/stdc++.h>

using namespace std;

int splitArray(vector<int> &arr, int k) {
    sort(arr.begin(), arr.end());
}

int main() {
  vector<int> arr = {7, 2, 5, 10, 8};
  int k = 2;

  int ans = splitArray(arr, k);
  cout << ans;
  return 0;
}