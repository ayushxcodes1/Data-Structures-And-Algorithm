#include <bits/stdc++.h>

using namespace std;

//Time Complexity - Worst & Avg: O(N^2), Best: O(N)
void bubbleSort(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for(int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
               int temp = arr[j + 1];
               arr[j + 1] =  arr[j];
               arr[j] = temp;
               didSwap = 1;
            }
        }
        if(didSwap == 0) {
           break;
        }
    }
}

int main() {
   int arr[6] = {13, 46, 24, 52, 20, 9};
   int n = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, n);
  
  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}