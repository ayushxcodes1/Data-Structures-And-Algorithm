#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int maxLength(vector<int> &arr) {
    int n = arr.size();
    int maxLen = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == 0) {
               maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

//Better 


int main() {
  vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
  int ans = maxLength(arr);
  cout << ans;
  return 0;
}