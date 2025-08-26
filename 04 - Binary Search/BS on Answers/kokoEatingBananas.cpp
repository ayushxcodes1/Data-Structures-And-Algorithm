#include <bits/stdc++.h>

using namespace std;

//Brute Force

//Find Max
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

int minEatingSpped(vector<int> &arr, int h) {
    int maximum = findMax(arr);
    for(int i = 1; i <= maximum; i++) {
        int reqTime = computeReqTime(arr, i);
        if(reqTime <= h) return i;
    }
}   

int main() {
  vector<int> arr = {3, 6, 7, 11};
  int h = 8;
  int ans = minEatingSpped(arr, h);
  cout << "Koko can eat all bananas within " << ans << " hours.";
  return 0;
}