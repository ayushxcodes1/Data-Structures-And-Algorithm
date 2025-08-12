#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2 * N!), SC: O(N * N!) - very slow

//Better - TC: O(N), SC: O(1) - Using STL
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