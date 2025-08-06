#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(N)
bool isSorted(vector<int> &arr, int n) {
  for(int i = 0; i < n; i++) {
    if(arr[i] > arr[i + 1]) {
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

//Optimal - TC: O(N), SC: O(1)
bool check2(vector<int> &arr, int n) {
  int count = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] > arr[(i + 1) % n]) {
      count++;
    }      
  } 
  return count <= 1;
}


int main() {
  vector<int> arr = {3, 4, 5, 1, 2};
  int n = arr.size();
  bool res = check2(arr, n);
  cout << boolalpha << res;
  return 0;
}