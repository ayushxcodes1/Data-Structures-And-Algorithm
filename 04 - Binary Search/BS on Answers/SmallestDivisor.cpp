#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 5, 9};
  int threshold = 6;

  int ans = smallestDivisor(arr, threshold);
  cout << ans;
  
  return 0;
}