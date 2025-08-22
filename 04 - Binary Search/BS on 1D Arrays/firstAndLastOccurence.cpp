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

int firstOccurrence(vector<int> &arr, int low, int high, int target) {
    int n = arr.size();
    int first = -1;
    while(low <= high) {
       int mid = (low + (high - low) / 2);

        if(arr[mid] == target) {
           first = mid;
           high = mid - 1;
        }
        else if(arr[mid] < target){  
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}

//Using LowerBound & UpperBound
vector<int> firstAndLastPosition(vector<int> &arr, int n, int target) {
    int stIndex = lowerBound(arr, 0, n - 1, target);
    int endIndex = upperBound(arr, 0, n - 1, target) - 1;

    if((stIndex == n) || arr[stIndex] != target) {
        return {-1, -1};
    }

    return {stIndex, endIndex};
}

//Without Using LowerBound & UpperBound
vector<int> firstAndLastPosition2(vector<int> &arr, int n, int target) {
    int stIndex = firstOccurrence(arr, 0, n - 1, target);
    int endIndex = lastOccurrence(arr, 0, n - 1, target);

    return {stIndex, endIndex};
}

int main() {
  vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
  int n = arr.size();
  int target = 10;

  vector<int> ans = firstAndLastPosition(arr, n, target);
  cout << "[" << ans[0] << "," << ans[1] << "]";

  return 0;
}