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

int computeReqTime(vector<int> &arr, int hourly) {
    int n = arr.size();
    int totalhrs = 0;
    for(int i = 0; i < n; i++) {
        totalhrs += ceil((double)arr[i] / hourly);
    }
    return totalhrs;
}

int minEatingSpeed(vector<int> &arr, int h) {
    int maximum = findMax(arr);
    for(int i = 1; i <= maximum; i++) {
        int reqTime = computeReqTime(arr, i);
        if(reqTime <= h) return i;
    }
}  

//Binary Search
int minEatingSpeed2(vector<int> &arr, int low, int high, int h) {
    int n = arr.size();

    int maxi = findMax(arr);
    int low = 1, high = maxi;
    while(low <= high) {
        
    }
}  

int main() {
  vector<int> arr = {3, 6, 7, 11};
  int n = arr.size();
  int h = 8;

  int ans = minEatingSpeed(arr, h);
  cout << "Koko can eat all bananas within " << ans << " hours." << "\n";

  int ans2 = minEatingSpeed2(arr, 0, n - 1, h);
  cout << "Koko can eat all bananas within " << ans2 << " hours.";
  return 0;
}