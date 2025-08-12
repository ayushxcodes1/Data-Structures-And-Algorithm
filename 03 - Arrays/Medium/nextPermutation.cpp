#include <bits/stdc++.h>

using namespace std;

vector<int> nextPermutation(vector<int> arr) {
    next_permutation(arr.begin(), arr.end());
    return arr;
}

int main() {
  vector<int> arr = {3, 2, 1};
  vector<int> ans = nextPermutation(arr);
  for(auto num : ans) {
    cout << num << " ";
  }
  return 0;
}