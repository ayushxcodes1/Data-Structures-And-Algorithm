#include <bits/stdc++.h>

using namespace std;

//Time Complexity - 
//Space Complexity -
void insertionSort(vector<int> &arr, int n) {
 
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