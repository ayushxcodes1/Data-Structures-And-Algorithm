#include <bits/stdc++.h>

using namespace std;

int nCr(int n, int r) {
    long long res = 1;
    for(int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main() {
  int ans = nCr(5, 3);
  cout << ans;
  
  return 0;
}