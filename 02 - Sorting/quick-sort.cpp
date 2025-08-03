#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int low, int high) {
    
}

void qs(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> &arr, int n) {
    qs(arr, 0, n - 1);
    return arr;
}

int main() {
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
  int n = arr.size();

  quickSort(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}