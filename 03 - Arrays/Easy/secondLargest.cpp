#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N), SC: O(1)
int secondLargest(vector<int> &arr, int n) {
    int largest = 0, secLargest = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
           secLargest = largest;
           largest = arr[i];
        } 
        else if(arr[i] > secLargest) {
            secLargest = arr[i];
        }
    }
}

int main() {
  vector<int> arr = {2, 8, 6, 13, 5, 9};
  int n = arr.size();
  int res = secondLargest(arr, n);
  cout << "Second Largest: " << res;
  return 0;
}