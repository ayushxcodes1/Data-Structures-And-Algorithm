#include <bits/stdc++.h>

using namespace std;

int findMedian(vector<vector<int>> &mat, int n, int m) {
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            temp.push_back(mat[i][j]);
        }
    }

    sort(temp.begin(), temp.end());
    return temp[temp.size() / 2];
}

int main() {
    vector<vector<int>> mat = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int n = mat.size();
    int m = mat[0].size();

    int ans = findMedian(mat, n, m);
    cout << "Brute: " << ans << endl;
  return 0;
}