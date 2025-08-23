#include <bits/stdc++.h>

using namespace std;

//unique
int cntRotations(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        //array is sorted
        if(arr[low] <= arr[high]) {
            if(arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }
        
        //left half is sorted
        if(arr[low] <= arr[mid]) {
            if(arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        
        //right half is sorted
        else {
            if(arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid  - 1;
        }
    }
    return index;
}

//duplicates
int cntRotations2(vector<int> &arr) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        //array is sorted
        if(arr[low] <= arr[high]) {
            if(arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }

        //trim the search space
        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            if(arr[low] < ans) {
               index = low;
               ans = arr[low];
            }
            low++; 
            high--;
        }
        
        //left half is sorted
        if(arr[low] <= arr[mid]) {
            if(arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        
        //right half is sorted
        else {
            if(arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid  - 1;
        }
    }
    return index;
}

int main() {
  vector<int> arr = {3, 4, 5, 1, 2};
  int ans = cntRotations(arr);
  cout << ans;
  return 0;
}