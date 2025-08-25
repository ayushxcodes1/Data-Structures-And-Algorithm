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
    return ans;
}

int findSqrt2(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        if(i * i <= n) {
           ans = i;
        }
        else {
           break;
        }
    }
    return ans;
}

int main() {
  int n = 28;

  //STL
  int ans = sqrt(n);
  cout << "Square Root Of " << n << " is " << ans << "\n";

  //Linear Search
  int ans2 = findSqrt(n);
  cout << "Square Root Of " << n << " is " << ans2 << "\n";

  //Binary Search
  int ans3 = findSqrt2(n);
  cout << "Square Root Of " << n << " is " << ans3 << "\n";
  return 0;
}