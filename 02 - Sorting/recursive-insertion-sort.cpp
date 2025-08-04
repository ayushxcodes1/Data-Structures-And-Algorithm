#include <bits/stdc++.h>

using namespace std;

//Time Complexity - Worst & Avg: O(N^2), Best: O(N)
//Space Complexity - O(N)
void insertionSort(vector<int> &arr, int i, int n) {
    if(i == n) return;

    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertionSort(arr, i + 1, n);
}

int main() {
  vector<int> arr = {13, 46, 24, 52, 20, 9};
  int n = arr.size();

  insertionSort(arr, 0, n);

  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}