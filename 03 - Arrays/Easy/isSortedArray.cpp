#include <bits/stdc++.h>

using namespace std;

//Time Complexity: O(N), Space Complexity: O(1)
int isSorted(int arr[], int n) {
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
  int arr[5] = {1, 2, 1, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  bool res = isSorted(arr, n);
  cout << boolalpha << res;
  return 0;
}