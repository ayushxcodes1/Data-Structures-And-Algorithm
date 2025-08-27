#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(M * N) - M is the maximum element in the array
int findMax(vector<int> &arr) {
    int n = arr.size();
    int maxi = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxi) {
           maxi = arr[i];
        }
    }
    return maxi;
}

int findMinDays(vector<int> &arr, int day, int m, int k) {
    int n = arr.size();
    int bouquets = 0;
    int flowers = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= day) {
            flowers++;
            if(flowers == k) {
               bouquets++;
               flowers = 0; // reset after making 1 bouquet

            }
        }
        else {
           flowers = 0; //chain breaks
        }
    } 
    
    return bouquets >= m ? day : -1;
}

int minDays(vector<int> &arr, int m, int k) {
    int maximum = findMax(arr);
    for(int i = 1; i <= maximum; i++) {
        int mini = findMinDays(arr, i, m, k);
        if(mini == i) return mini;
    }
    return -1;
}  

//Binary Search - TC: O(NlogM)
int minDays2(vector<int> &arr, int m, int k) {
    int n = arr.size();
    int maxi = findMax(arr);

    int low = 1, high = maxi;
    while(low <= high) {
        int mid = (low + (high - low) / 2);
        int mini = findMinDays(arr, mid, m, k);
        if(mini == mid) return mid;
    }
    return -1;
}  

int main() {
  vector<int> arr = {1, 10, 3, 10, 2};
  int n = arr.size();
  int m = 3, k = 1;

  int ans = minDays(arr, m, k);
  cout << "Minimum Days Needs To Make M Bouquets are " << ans << "\n";

  int ans2 = minDays2(arr, m, k); 
  cout << "Minimum Days Needs To Make M Bouquets are " << ans << "\n";
  return 0;
}