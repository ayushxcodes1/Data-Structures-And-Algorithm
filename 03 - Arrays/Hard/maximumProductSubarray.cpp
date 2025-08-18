#include <bits/stdc++.h>

using namespace std;
 
//Brute Force - TC: O(N^2), SC: O(N)
vector<int> maxProduct(vector<int> arr) {
  int n = arr.size();
  int maxProd = INT_MIN;
  for(int i = 0; i < n; i++) {
    int prod = 1;
    for(int j = i; j < n; j++) {
      prod = prod * arr[j];
    }
    maxProd = max(prod, maxProd);
  }
  return arr;
}

int main() {
  vector<int> arr = {2, 3, -2, 4};
  vector<int> ans = maxProduct(arr);
  for(auto it : ans) {
    cout << it << " ";
  }

  return 0;
}