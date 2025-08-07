#include <bits/stdc++.h>

using namespace std;

//Left Rotate - TC: O(N), SC: O(1)
void leftRotate(vector<int> &arr, int n) {
  int temp = arr[0]; 
  for(int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
}

//Right Rotate - TC: O(N), SC: O(1)
void rightRotate(vector<int> &arr, int n) {
  int temp = arr[n - 1];
  for(int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int n = arr.size();

  rightRotate(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}