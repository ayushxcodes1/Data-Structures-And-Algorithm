#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(N^2)
//Space Complexity - O(N)
void insertionSort(vector<int> &arr, int i, int n) {
    if(n == 1) return;
    for(int j = 1; j < n; j++){
        if(j > 0 && arr[j - 1] > arr[j]) {
           swap(arr[j - 1], arr[j]);
        } 
    }

    insertionSort(arr, i + 1, n);
}

int main() {
  vector<int> arr = {13, 46, 24, 52, 20, 9};
  int n = arr.size();

  insertionSort(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}