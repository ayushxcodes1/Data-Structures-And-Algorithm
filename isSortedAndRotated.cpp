#include <bits/stdc++.h>

using namespace std;



int main() {
  int arr[5] = {3, 4, 5, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  bool res = isSorted(arr, n);
  cout << boolalpha << res;
  return 0;
}