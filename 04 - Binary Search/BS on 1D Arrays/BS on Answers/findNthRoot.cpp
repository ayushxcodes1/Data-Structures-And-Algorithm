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


//Optimal1 - TC: O(N * logM) - Binary Search

//return 1, if == m
//return 0, if < m
//return 2, if > m 

//O(N)
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

//Optimal2 - TC: O(logN * logM) - Fast Exponentiation 
long long fastExpo(long base, long exp, long long limit) {
    long long ans = 1;
    while(exp > 0) {
        if(exp % 2 == 1) {
           if(ans > limit / base) return limit + 1; 
           ans = ans * base;
        }   
        exp = exp / 2;
        if(exp > 0){
            if(base > limit / base) return limit + 1; 
            base = base * base;
        }
    }
    return ans;
}

int findNthRoot2(int n, int m) {
    int low = 1, high = m;
    while(low <= high) {
        long long mid = (low + (high - low) / 2);
        long long val = fastExpo(mid, n, m);
        
        if(val == m) {
           return mid;
        }
        else if(val < m) {
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