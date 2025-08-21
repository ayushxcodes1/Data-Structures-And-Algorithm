#include <bits/stdc++.h>

using namespace std;

//Iterative - TC: O(N), SC: O(1)
int search(vector<int> &arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
           return i;
        }
    }
    return -1;
}

//Recursive
int search(vector<int> &arr, int i, int target){
    search(arr, i + 1, target);
}

int main() {
  vector<int> arr = {-1, 0, 3, 5, 9, 12};
  int ans = search(arr, 0, 9);
  cout << "Target found at index " << ans;
  return 0;
}