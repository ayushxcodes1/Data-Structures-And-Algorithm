#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[6] = {1, 2, 4, 1, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  //pre compute
  map<int, int> mpp;
  for(int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  //iterate on the map
  // for(auto it : mpp) {
  //   cout << it.first << "->" << it.second << endl;
  // }

  int q;
  while(cin >> q) {
    cout << q << " -> " << mpp[q] << endl;
  }

  return 0;
}