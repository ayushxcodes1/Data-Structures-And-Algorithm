#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N), SC: O(1)
int findKthMissing(vector<int> &arr, int k) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] <= k) k++;
        else break;
    }
}

//Optimal - TC: O(logN), SC: O(1)
int findKthMissing(vector<int> &arr, int k) {
    int n = arr.size();
    
}

int main() {
  vector<int> arr = {2, 3, 4, 7, 11};
  int k = 5;

  int ans = findKthMissing(arr, k);
  return 0;
}