#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(N^2)
vector<vector<int>> rotateImage(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<vector<int>> ans(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ans[j][n - i - 1] = mat[i][j]; 
        }
    }
    return ans;
}

//Better - TC: O(N^2), SC: O(1)
vector<vector<int>> rotateImage(vector<vector<int>> &mat) {
    int n = mat.size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = mat.size();

    vector<vector<int>> ans = rotateImage(mat);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}