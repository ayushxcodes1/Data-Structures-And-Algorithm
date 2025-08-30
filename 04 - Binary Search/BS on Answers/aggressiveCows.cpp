#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> stalls = {0, 3, 4, 7, 9, 10};
  int k = 4;

  int ans = aggressiveCows(stalls, k);
  cout << ans;
  return 0;
}