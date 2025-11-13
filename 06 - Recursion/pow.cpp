#include <bits/stdc++.h>

using namespace std;

//Brute - TC:O(N), SC: O(1) Iterative - TOO SLOW for large N
double myPow(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if(nn < 0) nn = -nn;

  for(int i = 0; i < nn; i++) {
    ans *= x;
  }

  if(n < 0) ans = 1.0 / ans;
  return ans;
}

//Optimal - TC: O(logN), SC: O(logN) - Recursion - Exponentiation
double myPow2(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if(nn < 0) nn = -nn;

  for(int i = 0; i < nn; i++) {
    ans *= x;
  }

  if(n < 0) ans = 1.0 / ans;
  return ans;
}


int main() {
  double ans = myPow(2.0, -5);
  cout << ans << endl;
  return 0;
}