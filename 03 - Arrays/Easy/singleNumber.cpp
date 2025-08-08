#include <bits/stdc++.h>

using namespace std;

//Better - TC: O(N), SC: O(k) - k is no. of distinct elements
void singleNumber(vector<int> &arr) {
    int n = arr.size();
    int ans = -1;

    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        if(it.second == 1) {
           cout << "Single Number: " << it.first;
        }
    }
}

int main() {
  vector<int> arr = {4, 4, 2, 2, 1, 3, 3};
  singleNumber(arr);
  return 0;
}