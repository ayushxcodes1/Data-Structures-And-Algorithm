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
        return maxi;
    }
}

int main() {
  vector<int> arr = {3, 6, 7, 11};
  int ans = minEatingSpeed(arr);
  return 0;
}