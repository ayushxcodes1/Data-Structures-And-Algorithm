#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[5] = {1, 2, 1, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int hash[13] = {0};

  for(int i = 0; i < n; i++) {
    hash[arr[i]]++; 
  }

  int x;
  while(cin >> x) {
    cout << hash[x] << " ";
  }

  return 0;
}