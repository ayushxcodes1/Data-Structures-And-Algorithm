#include <bits/stdc++.h>

//Time Complexity - O(N^2)
void bubbleSort(int arr[], int n) {
    for(int i = n - 1; i >= 0; i++) {
        for(int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
               int temp = arr[j + 1];
               arr[j + 1] =  arr[j];
               arr[j] = temp;
            }
        }
    }
}

using namespace std;

int main() {
   int arr[6] = {13, 46, 24, 52, 20, 9};
   int n = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, n);
  
  for(auto it : arr) {
    cout << it << " ";
  }
  return 0;
}