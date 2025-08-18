#include <bits/stdc++.h>

using namespace std;
 
//Brute Force - TC: O(N^2), SC: O(N)
int maxProduct(vector<int> &arr) {
  int n = arr.size();
  int maxProd = INT_MIN;
  for(int i = 0; i < n; i++) {
    int prod = 1;
    for(int j = i; j < n; j++) {
      prod = prod * arr[j];
    }
    maxProd = max(prod, maxProd);
  }
  return maxProd;
}

int main() {
  vector<int> arr = {2, 3, -2, 4};
  int ans = maxProduct(arr);
  cout << ans << " ";

  return 0;
}