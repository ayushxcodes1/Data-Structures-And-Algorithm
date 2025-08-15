#include <bits/stdc++.h>

using namespace std;

/*Variation - 1: Given Row and Column, print the element*/

//Brute Force - TC: O(r), SC: O(1)
int nCr(int n, int r) {
    long long res = 1;
    for(int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int main() {
  int ans = nCr(4, 2);
  cout << ans;
  
  return 0;
}