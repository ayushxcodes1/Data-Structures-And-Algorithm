#include <bits/stdc++.h>

using namespace std;

bool find(int i, int n) {
    
}

//Linear Search
int findNthRoot(int n, int m) {
    for(int i = 1; i <= m; i++) {
        if(find(i, n) == m) {
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