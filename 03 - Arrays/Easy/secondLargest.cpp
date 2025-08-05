#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN), SC: O(1)
int secondLargest(vector<int> &arr, int n) {
   
}

int main() {
  vector<int> arr = {2, 8, 6, 13, 5, 9};
  int n = arr.size();
  int res = secondLargest(arr, n);
  cout << "Second Largest: " << res;
  return 0;
}