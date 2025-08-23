#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX;
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        //search space is already sorted 
        if(arr[low] <= arr[high]) {
            mini = min(arr[low], mini);
            break;
        }

        // Left half is sorted
        if(arr[low] <= arr[mid]) {
            mini = min(arr[low], mini);
            low = mid + 1;
        }

        // Right half is sorted
        else {
            mini = min(arr[mid], mini);
            high = mid - 1;
        }
    }
    return mini;
}

//Duplicates
int findMin2(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX;
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        
        //trim the search space
        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            mini = min(arr[low], mini);
            low++;
            high--;
        }

        //search space is already sorted 
        else if(arr[low] <= arr[high]) {
            mini = min(arr[low], mini);
            break;
        }

        // Left half is sorted
        else if(arr[low] <= arr[mid]) {
            mini = min(arr[low], mini);
            low = mid + 1;
        }

        // Right half is sorted
        else {
            mini = min(arr[mid], mini);
            high = mid - 1;
        }
    }
    return mini;
}

int main() {
  vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
  int ans = findMin(arr);
  cout << "Minimum is " << ans << "\n";

  vector<int> arr2 = {3, 3, 3, 1, 3, 3};
  int ans2 = findMin2(arr2);
 cout << "Minimum is " << ans2 << "\n";
  return 0;
}    
