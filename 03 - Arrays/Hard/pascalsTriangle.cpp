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

/*Variation - 2: Print the Nth row*/

//Brute Force - TC: O(n * r), SC: O(1)
void nCr2(int n) {
    for(int c = 1; c <= n; c++) {
        cout << nCr(n - 1, c - 1) << " ";
    }
}

int main() {
  int ans = nCr(4, 2);
  cout << ans;
  
  return 0;
}