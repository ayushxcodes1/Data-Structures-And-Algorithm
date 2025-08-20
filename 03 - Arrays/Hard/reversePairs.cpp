#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int reversePairs(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > 2 * arr[j]) {
               cnt++;
            }
        }
    }
    return cnt;
}

//Optimal - TC: O(NlogN + N), SC: O(N)
int reversePairs2(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > 2 * arr[j]) {
               cnt++;
            }
        }
    }
    return cnt;
}

int main() {
  vector<int> arr = {40, 25, 19, 12, 9, 6, 2};

  int ans = reversePairs(arr);
  cout << ans;

  cout << "\n";

  int ans2 = reversePairs2(arr);
  cout << ans2;

  return 0;
}