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

//Brute - TC:O(N), SC: O(N) - Recursive 
double myPow2(double x, int n) {
  if(n == 0) return 1.0;
  if(n < 0) return 1.0 / myPow4(x, -n);
  return x * myPow(x, n - 1);
}

//Optimal - TC: O(logN), SC: O(1) - Iterative - Exponentiation
double myPow3(double x, int n) {
  double ans = 1.0;
  long long nn = n;
  if(nn < 0) nn = -nn;

  while(nn > 0) {
    if(nn % 2 == 1) {
      ans = ans * x;
      nn = nn - 1;
    }
    else {
      x = x * x;
      nn = nn / 2;
    }
  }

  if(n < 0) ans = 1.0 / ans;
  return ans;
}

//Optimal - TC: O(logN), SC: O(logN) - Recursive - Exponentiation
double myPow4(double x, int n) {
  if(n == 0) return 1.0;
  if(n < 0) return 1.0 / myPow4(x, -n);
  
  double half = myPow4(x, n / 2);

  if(n % 2 == 0) {
    return half * half;
  } else return x * half * half;
    
}

int main() {
  double ans = myPow(2.0, -5);
  cout << ans << endl;

  double ans = myPow2(2.0, -5);
  cout << ans << endl;
  return 0;
}