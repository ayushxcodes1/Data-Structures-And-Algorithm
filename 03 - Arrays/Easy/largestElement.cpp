#include <bits/stdc++.h>

using namespace std;

int largestElement(int arr[], int n) {
   sort(arr.begin(), arr.end());
   return arr[n - 1];
}

int main() {
  int arr[6] = {2, 8, 6, 13, 5, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = largestElement(arr, n);
  cout << "Largest Element: " << res;
  return 0;
}