#include <bits/stdc++.h>

using namespace std;

/*Variation - 1: Given Row No. and Column No., print the element at that place*/

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
vector<int> nCr3(int n) {
    vector<int> ansRow;
    int ans = 1;
    ansRow.push_back(ans);
    for(int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

/*Variation - 3: Given N, print the first N Rows */

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

//Optimal - TC: O(n^2), SC: O(1)
vector<vector<int>> nCr5(int n) {
    vector<vector<int>> ans;
    for(int i = 1; i <= n; i++) {
        ans.push_back(nCr3(i));
    }
    return ans;
}

int main() {
    int ans = nCr(4, 2);
    cout << ans;

    cout << "\n";
    cout << "\n";

    nCr2(4);
    
    cout << "\n";
    cout << "\n";

    vector<int> ans3 = nCr3(4);
    for(auto it : ans3) {
        cout << it << " ";
    }

    cout << "\n";
    cout << "\n";

    vector<vector<int>> ans4 = nCr4(4);
    for (auto it : ans4) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    cout << "\n";

    
    vector<vector<int>> ans5 = nCr5(4);
    for (auto it : ans5) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }

  return 0;
}