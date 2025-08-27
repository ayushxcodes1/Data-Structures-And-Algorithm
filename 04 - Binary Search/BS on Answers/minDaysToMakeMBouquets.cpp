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
               flowers -= k;
            }
        }
        else {
           flowers = 0; //no adjacent flowers found
        }
    } 
    
    if(bouquets >= m) return day;
    else return -1;
}

int minDays(vector<int> &arr, int m, int k) {
    int maximum = findMax(arr);
    for(int i = 1; i <= maximum; i++) {
        int mini = findMinDays(arr, i, m, k);
        if(mini == i) return i;
    }
    return -1;
}  

// //Binary Search - TC: O(NlogM)
// int minEatingSpeed2(vector<int> &arr, int h) {
//     int n = arr.size();
//     int maxi = findMax(arr);

//     int low = 1, high = maxi;
//     while(low <= high) {
//         int mid = (low + (high - low) / 2);
//         int totalHrs = computeTotalHrs(arr, mid);
//         if(totalHrs <= h) {
//            high = mid - 1;
//         }
//         else low = mid + 1;
//     }
//     return low;
// }  

int main() {
  vector<int> arr = {3, 6, 7, 11};
  int n = arr.size();
  int m = 3, k = 1;

  int ans = minDays(arr, m, k);
  cout << "Minimum Days Needs To Make M Bouquets are " << ans;
  return 0;
}