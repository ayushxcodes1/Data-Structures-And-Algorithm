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
        //O(M * logN) using STL pow()
        if(power(i, n) == m) {
            return i;
        }
        else if(power(i, n) > m) {
           break;
        }
    }
    return -1;
}


//Binary Search - TC: O(N * logM)

//return 1, if == m
//return 0, if < m
//return 2, if > m 
int func(int mid, int n, int m) {
    long long ans = 1;
    for(int i = 1; i <= n; i++) {
        ans = ans * mid;
        if(ans > m) return 2;
    }
    if(ans == m) return 1;
    return 0;
}

int findNthRoot2(int n, int m) {
    int low = 1, high = m;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        int midN = func(mid, n, m);
        //O(logN * logM) using STL pow()
        if(midN == 1) {
           return mid;
        }
        else if(midN == 0) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
  int n = 4, m = 69;

  int ans = findNthRoot(n, m);
  cout << ans << "\n";

  int ans2 = findNthRoot2(n, m);
  cout << ans2;

  return 0;
}