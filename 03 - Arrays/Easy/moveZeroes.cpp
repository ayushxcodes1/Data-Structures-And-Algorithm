#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(2N), SC: O(N)
void moveZeroes(vector<int> &arr, int n) {
    vector<int> temp;

    for(int i = 0; i < n; i++) { 
        if(arr[i] != 0) {
           temp.push_back(arr[i]);  // Store non-zero elements
        } 
    }

    for(int i = 0; i < temp.size(); i++) {  
        arr[i] = temp[i];          // Copy non-zero elements back
    }

    for(int i = temp.size(); i < n; i++) { 
        arr[i] = 0;               // Fill remaining with zeroes
    }
}

//Optimal - TC: O(N), SC: O(1)
void moveZeroes3(vector<int> &arr, int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
           swap(arr[i], arr[j]);
           j++;
        }
    }
}

int main() {
  vector<int> arr = {0, 1, 0, 3, 12};
  int n = arr.size();

  moveZeroes2(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }

  return 0;
}