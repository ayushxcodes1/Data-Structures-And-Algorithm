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

//Better - TC(NlogN), SC: O(N)
int maxLength2(vector<int> &arr) {
    int n = arr.size();
    map<int, int> mpp;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        
        //subarray from 0..i has sum 0
        if(sum == 0) {
           maxLen = i + 1;
        }

        //if sum was seen before
        if(mpp.find(sum) != mpp.end()) {
           maxLen = max(maxLen, i - mpp[sum]);
        } else {
           mpp[sum] = i;
        }
    }
    return maxLen;
}

int main() {
  vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
  int ans = maxLength(arr);
  cout << ans;

  cout << endl;

  int ans2 = maxLength(arr);
  cout << ans2;
  return 0;
}