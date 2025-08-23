#include <bits/stdc++.h>

using namespace std;

int findPeakElement(vector<int>& arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    
}

int main() {
  vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
  int ans = findPeakElement(arr);
  cout << "Peak Element at index " << ans;
  return 0;
}