#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((Maxi - Mini + 1) * N)
int findMini(vector<int> &arr) {
    int n = arr.size();
    int mini = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < mini) {
           mini = arr[i];
        }
    }
    return mini;
}

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

bool canMakeBouquets(vector<int> &arr, int day, int m, int k) {
    int n = arr.size();
    int bouquets = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= day) {
            cnt++;
        }
        else {
           bouquets += (cnt / k);
           cnt = 0;
        }
    } 
    bouquets += (cnt / k);
    return bouquets >= m;
}

int minDays(vector<int> &arr, int m, int k) {
    int n = arr.size();
    if(n < m * k) return -1; //impossible case

    int mini = findMini(arr);
    int maxi = findMaxi(arr);
    int ans = 0;

    for(int i = mini; i <= maxi; i++) {
        bool canMake = canMakeBouquets(arr, i, m, k);
        if(canMake == true) return i;
    }
    return -1;
}  

//Binary Search - TC: O(N * log(Maxi - Mini + 1))
int minDays2(vector<int> &arr, int m, int k) {
    int n = arr.size();
    if(n < m * k) return -1; //impossible case
    
    int mini = findMini(arr);
    int maxi = findMaxi(arr);

    int low = mini, high = maxi;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        bool canMake = canMakeBouquets(arr, mid, m, k);
        if(canMake == true) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}  

int main() {
  vector<int> arr = {1, 10, 3, 10, 2};
  int n = arr.size();
  int m = 3, k = 1;

  int ans = minDays(arr, m, k);
  cout << "Minimum Days Needs To Make M Bouquets are " << ans << "\n";

  int ans2 = minDays2(arr, m, k); 
  cout << "Minimum Days Needs To Make M Bouquets are " << ans2 << "\n";
  return 0;
}