#include <bits/stdc++.h>

using namespace std;

int largestElement(int arr[], int n) {
    int maxi = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
           maxi = arr[i];
        }
    }
    return maxi;
}

int main() {
  int arr[6] = {2, 8, 6, 13, 5, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  largestElement(arr, n);
  return 0;
}