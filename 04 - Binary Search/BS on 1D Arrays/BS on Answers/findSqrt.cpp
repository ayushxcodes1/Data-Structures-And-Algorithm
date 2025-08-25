#include <bits/stdc++.h>

using namespace std;

//Linear Search
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

//Binary Search
int findSqrt2(int n) {
    int low = 1, high = n;
    while(low <= high) {
        long long mid = (low + (high - low) / 2);
        long long val = mid * mid;
        if(val == n) return mid;

        else if(val > n) {
           high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return high;
}

int main() {
  int n = 28;

  //Linear Search - O(N)
  int ans2 = findSqrt(n);
  cout << "Square Root Of " << n << " is " << ans2 << "\n";

  //STL - O(logN)
  int ans = sqrt(n);
  cout << "Square Root Of " << n << " is " << ans << "\n";

  //Binary Search - O(logN)
  int ans3 = findSqrt2(n);
  cout << "Square Root Of " << n << " is " << ans3 << "\n";
  return 0;
}