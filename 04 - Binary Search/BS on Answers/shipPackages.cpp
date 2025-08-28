#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(max * N)
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

int findDivisorSum(vector<int> &arr, int n, int d) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        // sum += (arr[i] + d - 1) / d; //fast
        sum += ceil((double)arr[i] / d); //slow
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int threshold) {
    int n = arr.size();
    int maxi = findMax(arr);

    for(int i = 1; i <= maxi; i++) {
        int sum = findDivisorSum(arr, n, i);
        if(sum <= threshold) {
           return i;
        }
    }
    return -1;
}

//Optimal - O(log(max) * N)
int shipPackages2(vector<int> &arr, int threshold) {
    int n = arr.size();
    int maxi = findMax(arr);
    int low = 1, high = maxi;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        int divisorSum = findDivisorSum(arr, n, mid);
        
        if(divisorSum <= threshold) {
           high = mid - 1;
        }
        else low = mid + 1;
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