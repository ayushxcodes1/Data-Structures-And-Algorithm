#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {3, 6, 12, 19, 33};
  int k = 3;

  int ans = minMaxDist(arr, k);
  cout << ans << "\n";
  return 0;
}