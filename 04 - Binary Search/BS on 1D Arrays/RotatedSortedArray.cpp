#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);

        if(nums[mid] == target) return mid;
        
        //left sorted
        else if(nums[low] <= nums[mid]) {
            //target exist in left half
            if(nums[low] <= target && target <= nums[mid]) {
                high = mid - 1; //eliminate right half
            } 
            else {
                low = mid + 1; //eliminate left half
            }
        }

        //right sorted
        else {
            //target exist in right half
            if(nums[mid] <= target && target <= nums[high]) {
                low = mid + 1; //eliminate left half
            } 
            else {
                high = mid - 1; //eliminate right half
            }
        }
    }
    return -1;
}

int main() {
  
  return 0;
}