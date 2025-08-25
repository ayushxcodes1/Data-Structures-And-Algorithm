#include <bits/stdc++.h>

using namespace std;


//Brute Force - TC: O(M * N)

//O(N)
int power(int i, int n) {
    long long ans = 1;
    for(int j = 0; j < n; j++) {
        ans = ans * i;
    }
    return ans;
}

//O(M)
int findNthRoot(int n, int m) {
    for(int i = 1; i <= m; i++) {
        if(power(i, n) == m) {
           return i;
        }
        //O(M * logN) using STL pow()
    }
    return -1;
}


//Binary Search


int main() {
  int n = 3, m = 27;

  //Linear Search
  int ans = findNthRoot(n, m);
  cout << ans << "\n";

  return 0;
}