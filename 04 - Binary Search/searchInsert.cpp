#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + (high - low) / 2);

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
  
  return 0;
}