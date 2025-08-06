#include <bits/stdc++.h>

using namespace std;

vector<int> rotateArray(vector<int> &arr, int n, int k) {
    int temp = arr[n - 1];
    for(int i = 1; i < n; i++) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    return arr;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int n = arr.size();

  vector<int> res = rotateArray(arr, n, 3);

  for(auto it : res) {
    cout << it << " ";
  }

  return 0;
}