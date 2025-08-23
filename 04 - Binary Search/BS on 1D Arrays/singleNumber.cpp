#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            return arr[low];
        }
        if(arr[low] == arr[low + 1]) low += 2;
        if(arr[high] == arr[high - 1]) high -= 2;
    }
    return -1;
}

int main() {
  vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
  return 0;
}