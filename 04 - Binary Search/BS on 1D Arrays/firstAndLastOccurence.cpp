#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> &arr, int low, int high, int target) {
    int n = arr.size();
    int ans = n;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] >= target) {
           ans = mid;
           high = mid - 1;
        }
        else {  
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int low, int high, int target) {
    int n = arr.size();
    int ans = n;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] > target) {
           ans = mid;
           high = mid - 1;
        }
        else {  
            low = mid + 1;
        }
    }
    return ans;
}


vector<int> firstAndLastPosition(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while(low <= high) {
        
    }
}

int main() {
  vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};

  return 0;
}