#include <bits/stdc++.h>

using namespace std;
    
//TC - Worst: O(N/2)
bool search(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);

        //element found
        if(arr[mid] == target) return true;
        
        //trim the search space
        else if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++;
            high--;
        }

        //left sorted
        else if(arr[low] <= arr[mid]) {
            //target exist in left half
            if(arr[low] <= target && target <= arr[mid]) {
                high = mid - 1; //eliminate right half
            } 
            else {
                low = mid + 1; //eliminate left half
            }
        }

        //right sorted
        else {
            //target exist in right half
            if(arr[mid] <= target && target <= arr[high]) {
                low = mid + 1; //eliminate left half
            } 
            else {
                high = mid - 1; //eliminate right half
            }
        }
    }
    return false;
}

int main() {
  vector<int> arr = {3, 3, 1, 3, 3, 3, 3};
  bool ans = search(arr, 1);
  cout << boolalpha << ans;
  return 0;
}    