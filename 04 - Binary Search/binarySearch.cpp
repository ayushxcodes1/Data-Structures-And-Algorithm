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
int search2(vector<int> &arr, int i, int target){
    int n = arr.size();
    if(i == n) return -1;
    if(arr[i] == target) return i;
    search2(arr, i + 1, target);
}

int main() {
  vector<int> arr = {-1, 0, 3, 5, 9, 12};

  int ans = search(arr, 9);
  cout << "Target found at index " << ans << "\n";

  int ans2 = search2(arr, 0, 9);
  cout << "Target found at index " << ans2;
  return 0;
}