#include <bits/stdc++.h>

using namespace std;

void mS(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n - 1);
}

int main() {
  vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
  int n = arr.size();

  mergeSort(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}