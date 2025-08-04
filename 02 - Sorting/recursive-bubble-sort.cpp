#include <bits/stdc++.h>

using namespace std;

//Time Complexity - Worst & Avg: O(N^2), Best: O(N)

void bubbleSort(vector<int> &arr, int n) {
    if(n == 1) return;

    int didSwap = 0;
    for(int j = 0; j < n - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            didSwap = 1;
        }
    }
    if(didSwap == 0) return;

    bubbleSort(arr, n - 1);
}

int main() {
  vector<int> arr = {13, 46, 24, 52, 20, 9};
  int n = arr.size();

  bubbleSort(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}