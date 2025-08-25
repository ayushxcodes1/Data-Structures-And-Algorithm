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


//Binary Search
int findNthRoot2(int n, int m) {
    int low = 1, high = m;
    while(low <= high) {
        int mid = (low + (high - low) / 2);

        if(power(mid, n) == m) {
           return mid;
        }
        else if(power(mid, n) > m) {
           high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return high;
}

int main() {
  int n = 3, m = 27;

  int ans = findNthRoot(n, m);
  cout << ans << "\n";

  return 0;
}