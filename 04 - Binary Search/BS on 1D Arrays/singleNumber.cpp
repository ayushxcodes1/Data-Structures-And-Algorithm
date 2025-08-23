#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &arr) {
    int n = arr.size();

    if(n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        

        
    }
    return -1;
}

int main() {
  vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
  int ans = singleNumber(arr);
  cout << "Single Number: " << ans;
  return 0;
}