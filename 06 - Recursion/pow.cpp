#include <bits/stdc++.h>

using namespace std;

double myPow(double x, int n, double ans) {
  if(n == 0) return ans;

  ans = ans * x;

  myPow(x, n - 1, ans);
}

int main() {
  double ans = myPow(2.0, 5, 1.0);
  cout << ans << endl;
  return 0;
}