#include <bits/stdc++.h>

using namespace std;

//Iterative - TC: O(N), SC: O(1)
int search(vector<int> &arr, int n, int target) {
    int low = 0, high = n - 1;
    while(left <= right) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
           return mid;
        }
        else if(target > arr[mid]) {
           low = mid + 1;
        }
        else {
           high = mid - 1;
        }
    }
    return -1;
}

// //Recursive - TC: O(N), SC: O(N)
int search2(vector<int> &arr, int low, int high, int target){
   int mid = (low + high) / 2;
   if(low > high) return -1;

    if(arr[mid] == target) {
        return mid;
    }
    else if(target > arr[mid]) {
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
}

int main() {
  vector<int> arr = {-1, 0, 3, 5, 9, 12};  
  int n = arr.size();

  int ans = search(arr, n, 9);
  cout << "Target found at index " << ans << "\n";

  int ans2 = search2(arr, 0, n - 1, 9);
  cout << "Target found at index " << ans2;
  return 0;
}