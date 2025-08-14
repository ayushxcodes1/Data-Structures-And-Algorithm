#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(), SC: O()
void rotateImage(vector<vector<int>> mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(m, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans[j][n - i - 1] = mat[i][j]; 
        }
    }
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
     
    return 0;
}