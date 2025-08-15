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

//Optimal - TC: O(N), SC: O(1) 
void nCr3(int n) {
    int ans = 1;
    cout << ans << " ";
    for(int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
}

/*Variation - 3: Given N, print the entire pascal's triangle */

//Brute Force - TC: O(n * n * r), SC: O(1)
vector<vector<int>> nCr4(int n) {
    vector<vector<int>> ans;
    for(int row = 1; row <= n; row++) {
        vector<int> tempList;
        for(int col = 1; col <= row; col++) {
            tempList.push_back(nCr(row-1, col-1));
        }
        ans.push_back(tempList);
    }
    return ans;
}

int main() {
  int ans = nCr(4, 2);
  cout << ans;

  cout << "\n";

  nCr2(4);
  
  cout << "\n";

  nCr3(4);

  cout << "\n";

  return 0;
}