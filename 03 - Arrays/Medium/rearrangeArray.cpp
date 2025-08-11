#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(2N), SC: O(N)
vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
           pos.push_back(arr[i]);
        }
        else {
           neg.push_back(arr[i]);
        }
    }

    for(int i = 0; i < (n / 2); i++) {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    return arr;
}

//Optimal - TC: O(N), SC: O(N)
vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);
    int posIndex = 0, negIndex = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
           ans[negIndex] = arr[i];
           negIndex += 2;
        }
        else {
           ans[posIndex] = arr[i];
           posIndex += 2;
        }
    }
    return ans;
}

int main() {
  vector<int> arr = {-3, -1, 2, -5, 4, 8};
  vector<int> res = rearrangeArray(arr);
  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}