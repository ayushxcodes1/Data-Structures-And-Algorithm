#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((N * M) * log(N * M)), SC: O(N * M)
int findMedian(vector<vector<int>> &mat, int n, int m) {
    vector<int> temp;

    //O(N * M)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            temp.push_back(mat[i][j]);
        }
    }

    //O((N * M) * log(N * M))
    sort(temp.begin(), temp.end());
    return temp[temp.size() / 2];
}

//Brute Force - TC: O((N * M) * log(N * M)), SC: O(1)
int upperBound(vector<int> &arr, int low, int high, int target) {
    int n = arr.size();
    int ans = n;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] > target) {
           ans = mid;
           high = mid - 1;
        }
        else {  
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int n = mat.size();
    int m = mat[0].size();

    int ans = findMedian(mat, n, m);
    cout << "Brute: " << ans << endl;

  return 0;
}