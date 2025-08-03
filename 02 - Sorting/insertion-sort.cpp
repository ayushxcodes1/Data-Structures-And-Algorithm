#include <bits/stdc++.h>

using namespace std;

//Time Complexity - Worst & Avg: O(N^2), Best: O(N)
void insertionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
          int temp = arr[j - 1];
          arr[j - 1] = arr[j];
          arr[j] = temp;
          j--;
        }
    }
}


int main() {
   int arr[7] = {6, 8, 9, 12, 14, 15, 5};
   int n = sizeof(arr) / sizeof(arr[0]);

   insertionSort(arr, n);
  
  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}