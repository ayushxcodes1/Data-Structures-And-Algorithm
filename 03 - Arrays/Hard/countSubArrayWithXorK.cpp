#include <bits/stdc++.h>

using namespace std;

//Brute Force
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

int main() {
  vector<int> arr = {1, 1, 1, 1};

  int ans = subarrayXor(arr, 0);
  cout << ans;

  return 0;
}