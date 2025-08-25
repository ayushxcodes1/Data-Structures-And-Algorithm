#include <bits/stdc++.h>

using namespace std;

int findSqrt(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        if(i * i <= n) {
           ans = i;
        }
        else {
           break;
        }
    }
}

int main() {
  int n = 28;
  int ans = findSqrt(n);
  cout << "Square Root Of " << n << " is " << ans;
  return 0;
}