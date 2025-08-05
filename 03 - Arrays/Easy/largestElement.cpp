#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN), SC: O(1)
int largestElement(int arr[], int n) {
   sort(arr, arr + n);
   return arr[n - 1];
}

//Optimized
int largestElement(int arr[], int n) {
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
           largest = arr[i];
        }   
    }
    return largest;
}

int main() {
  int arr[6] = {2, 8, 6, 13, 5, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int res = largestElement(arr, n);
  cout << "Largest Element: " << res;
  return 0;
}