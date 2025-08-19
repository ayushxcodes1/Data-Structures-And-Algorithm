#include <bits/stdc++.h>

using namespace std;

//Brute Force -  TC: (N^2), SC: O(1)
int subarrayXor(vector<int> &arr, int k) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int xorr = arr[i];
        for(int j = i + 1; j < n; j++) {
            xorr = xorr ^ arr[j];
            if(xorr == k) {
               cnt++;
            }
        }
    }
    return cnt;
}

//Optimal - TC: O(NlogN), SC: O(N) - Prefix Xor
int subarrayXor2(vector<int> &arr, int k) {
    int n = arr.size();
    map<int, int> mpp;
    int xr = 0;
    mpp[xr]++;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        //k
        int x = xr ^ k;
        cnt += mpp[x];  
        mpp[xr]++;
    }
    return cnt;
}

int main() {
  vector<int> arr = {1, 1, 1, 1};

  int ans = subarrayXor(arr, 0);
  cout << ans;

  cout << endl;

  int ans2 = subarrayXor2(arr, 0);
  cout << ans2;

  return 0;
}