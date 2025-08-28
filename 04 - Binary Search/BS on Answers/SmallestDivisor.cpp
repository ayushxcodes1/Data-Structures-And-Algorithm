#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(maxi * N)
int findMaxi(vector<int> &arr) {
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
        sum += (arr[i] + d - 1) / d;
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int threshold) {
    int n = arr.size();
    int maxi = findMaxi(arr);

    for(int i = 1; i <= maxi; i++) {
        int sum = findDivisorSum(arr, n, i);
        if(sum <= threshold) {
           return i;
        }
    }
    return -1;
}

//Optimal - O(log(maxi) * N)
int smallestDivisor2(vector<int> &arr, int threshold) {
    int n = arr.size();
    int ans = -1;
    int maxi = findMaxi(arr);
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
  vector<int> arr = {1, 2, 5, 9};
  int threshold = 6;

  int ans = smallestDivisor(arr, threshold);
  cout << ans << "\n";

  int ans2 = smallestDivisor2(arr, threshold);
  cout << ans2;
  
  return 0;
}