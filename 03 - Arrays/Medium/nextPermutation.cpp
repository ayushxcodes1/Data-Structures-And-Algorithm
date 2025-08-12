#include <bits/stdc++.h>

using namespace std;

//Brute Force - very slow

//Better - TC: O(N), SC: O(1) - Using STL
vector<int> nextPermutation(vector<int> arr) {
  next_permutation(arr.begin(), arr.end());
  return arr;
}

//Optimal - TC: O(3N), SC: O(1)
vector<int> nextPermutation(vector<int> arr) {
  int n = arr.size();
  int ind = -1;
  for(int i = n - 2; i >= 0; i--) {
      if(arr[i] < arr[i + 1]) {
        ind = i;
        break;
      }
  }
  if(ind == -1) {
    reverse(arr.begin(), arr.end());
    return arr;
  }

  for(int i = n - 1; i > ind; i--) {
      if(arr[i] < arr[ind]) {
        swap(arr[i], arr[ind]);
        break;
      }

  }

  reverse(arr.begin() + ind + 1, arr.end());
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