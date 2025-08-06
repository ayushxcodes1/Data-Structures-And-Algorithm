#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(N)
bool isSorted(vector<int> &arr, int n) {
  for(int i = 1; i < n; i++) {
    if(arr[i - 1] > arr[i]) {
      return false;
    }
  }
  return true;
}

bool check(vector<int> &arr, int n) {
  vector<int> temp = arr;

  for(int i = 0; i < n; i++) {
    if(isSorted(temp, n)) return true;

    //Rotate left by 1
    int first = temp[0];
    for(int j = 0; j < n - 1; j++) {
      temp[j] = temp[j + 1];
    }
    temp[n - 1] = first;
  } 

  return false;
}

int main() {
  vector<int> arr = {3, 4, 5, 1, 2};
  int n = arr.size();
  bool res = check(arr, n);
  cout << boolalpha << res;
  return 0;
}