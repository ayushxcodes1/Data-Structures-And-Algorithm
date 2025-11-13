#include <bits/stdc++.h>

using namespace std;

//Brute - Iterative - TOO SLOW for large N
double myPow(double x, int n, double ans) {
  double ans = 1.0;
  long long nn = n;
  if(nn < 0) nn = -nn;

  ans = ans * x;

  return myPow(x, n - 1, ans);
}

int main() {
  double ans = myPow(2.0, 5, 1.0);
  cout << ans << endl;
  return 0;
}