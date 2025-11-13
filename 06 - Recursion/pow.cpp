#include <bits/stdc++.h>

using namespace std;

//Brute - Too Slow for large Ng
double myPow(double x, int n, double ans) {
  if(n == 0) return ans;

  ans = ans * x;

  return myPow(x, n - 1, ans);
}

int main() {
  double ans = myPow(2.0, 5, 1.0);
  cout << ans << endl;
  return 0;
}