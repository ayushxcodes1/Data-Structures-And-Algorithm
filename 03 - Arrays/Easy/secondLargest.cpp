#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(NlogN + N), SC: O(1)
int secondLargest(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());

    int largest = arr[n - 1];
    int secLargest = -1;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != largest) {
           secLargest = arr[i];
           break;
        }
    }
    return secLargest;
}

//Better - TC: (2N), SC: O(1)
int secondLargest2(vector<int> &arr, int n) {
    int largest = arr[0];
    int secLargest = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
           secLargest = largest;
           largest = arr[i];
        } 
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] > secLargest && arr[i] != largest) {
           secLargest = arr[i];
        }
    }
    return secLargest;
}

//Optimized - TC: O(N), SC: O(1)
int secondLargest3(vector<int> &arr, int n) {
    int largest = arr[0];
    int secLargest = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
           secLargest = largest;
           largest = arr[i];
        } 
        else if(arr[i] < largest && arr[i] > secLargest) {
           secLargest = arr[i];
        }
    }
    return secLargest;
}

int main() {
  vector<int> arr = {2, 8, 6, 13, 5, 9};
  int n = arr.size();
  int res = secondLargest(arr, n);
  cout << "Second Largest: " << res;
  return 0;
}