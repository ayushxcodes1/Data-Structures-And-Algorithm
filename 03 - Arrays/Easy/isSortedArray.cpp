#include <bits/stdc++.h>

using namespace std;

//Time Complexity: O(N), Space Complexity: O(1)
bool isSorted(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] <= arr[i]) {

        }
        else {
            return false;

        }
    }
    return true;
}

int main() {
  int arr[5] = {3, 4, 5, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  bool res = isSorted(arr, n);
  cout << res;
  return 0;
}