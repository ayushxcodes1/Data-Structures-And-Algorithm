#include <bits/stdc++.h>

using namespace std;

//TC: O(N), SC: O(1)
vector<int> leftRotate(vector<int> &arr, int n) {
  int temp = arr[0];
  for(int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  return arr;
}

//TC: O(N), SC: O(1)
vector<int> rightRotate(vector<int> &arr, int n) {
  int temp = arr[n - 1];
  for(int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
  return arr;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int n = arr.size();

  vector<int> res = rightRotate(arr, n);

  for(auto it : res) {
    cout << it << " ";
  }

  return 0;
}