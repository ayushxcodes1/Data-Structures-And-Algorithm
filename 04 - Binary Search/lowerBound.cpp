#include <bits/stdc++.h>

using namespace std;

//Linear Search
int lowerBound(vector<int> &arr, int x) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
           return i;
        }
    }
    return n;
}

int main() {
  vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 11};
  int ans = lowerBound(arr, 9);
  return 0;
}