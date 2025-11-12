#include <bits/stdc++.h>

using namespace std;

double myPow(double x, int n, double ans) {
   if(n == 0) return ans;

   ans = ans * x;
   n--;

}

int main() {
  double ans = myPow(2.0, 5, 1);
  cout << ans << endl;
  return 0;
}