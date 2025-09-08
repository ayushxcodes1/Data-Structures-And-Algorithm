#include <bits/stdc++.h>

using namespace std;

int kthElement(vector<int> &arr1, vector<int> &arr2, int k) {
    
}

int main() {
  vector<int> arr1 = {2, 3, 6, 7, 9}; 
  vector<int> arr2 = {1, 4, 8, 10}; 
  int k = 5;

  int ans = kthElement(arr1, arr2, k);
  cout << "Kth Element is: " << ans;
  return 0;
}