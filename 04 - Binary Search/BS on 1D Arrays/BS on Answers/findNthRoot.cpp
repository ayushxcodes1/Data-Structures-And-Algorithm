#include <bits/stdc++.h>

using namespace std;

int power(int i, int n) {
    long long ans = 1;
    for(int j = 0; j < n; j++) {
        ans = ans * i;
    }
    return ans;
}

//Brute Force - TC: O(M * N)
int findNthRoot(int n, int m) {
    for(int i = 1; i <= m; i++) {
        if(power(i, n) == m) {
           return i;
        }
    }
    return -1;
}



int main() {
  int n = 3, m = 27;

  //Linear Search
  int ans = findNthRoot(n, m);
  cout << ans << "\n";

  return 0;
}