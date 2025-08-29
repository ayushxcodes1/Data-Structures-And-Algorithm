#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((sum - max + 1) * N)
int findMax(vector<int> &arr) {
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
           maxi = arr[i];
        }
    }
    return maxi;
}

int findArraySum(vector<int> &arr) {
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int computeDaysReq(vector<int> &arr, int capacity) {
    int n = arr.size();
    int sum = 0;
    int days = 1;
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > capacity) {
            days++;
            sum = arr[i];
        }
        else {
           sum += arr[i];
        }
    }
    return days;
}

int shipPackages(vector<int> &arr, int days) {
    int n = arr.size();
    int maxi = findMax(arr); 
    int arraySum = findArraySum(arr); 
    for(int i = maxi; i <= arraySum; i++) { 
        int daysReq = computeDaysReq(arr, i); 
        if(daysReq <= days) {
           return i;
        }
    }
}

int shipPackages2(vector<int> &arr, int days) {
    int n = arr.size();
    int maxi = findMax(arr); 
    int arraySum = findArraySum(arr); 
    int low = maxi, high = arraySum;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int daysReq = computeDaysReq(arr, mid);
        if(daysReq <= days) {
           high = mid - 1;
        }
        else {
           low = mid + 1;
        }
    }
    return low;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int days = 5;

  int ans = shipPackages(arr, days);
  cout << ans << "\n";

  int ans2 = shipPackages2(arr, days);
  cout << ans2;
  
  return 0;
}