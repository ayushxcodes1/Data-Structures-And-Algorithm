#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int>& nums) {
    int n = nums.size();
    int mini = INT_MAX;
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + (high - low) / 2);

        if(nums[low] <= nums[mid]) {
            mini = min(nums[low], mini);
            low = mid + 1;
        }
        else {
            mini = min(nums[mid], mini);
            high = mid - 1;
        }
    }
    return mini;
}


int main() {
  
  return 0;
}