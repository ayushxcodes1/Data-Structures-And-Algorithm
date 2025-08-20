#include <bits/stdc++.h>

using namespace std;

int countInversions(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
               cnt++;
            }
        }
    }
    return cnt;
}

int main() {
  vector<int> arr = {2, 4, 1, 3, 5};
  return 0;
}