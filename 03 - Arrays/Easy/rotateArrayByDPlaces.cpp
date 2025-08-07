#include <bits/stdc++.h>

using namespace std;

//TC: O(N), SC: O(1)
vector<int> leftRotate(vector<int> &arr, int n, int d) {
  vector<int> temp; 
  
  d = d % n;
  
  for(int i = 0; i < d; i++) {
    temp[i] = arr[i];
  }
 
  for(int i = d; i < n; i++) {
    arr[i - d] = arr[i];
  }  

  for(int i = n - d; i < n; i++) {
    arr[i] = temp[i + (n - d)];
  }
  return temp;
}

//TC: O(N), SC: O(1)
vector<int> rightRotate(vector<int> &arr, int n) {
  int temp = arr[n - 1];
  for(int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
  return arr;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int n = arr.size();

  vector<int> res = leftRotate(arr, n, 3);

  for(auto it : res) {
    cout << it << " ";
  }

  return 0;
}