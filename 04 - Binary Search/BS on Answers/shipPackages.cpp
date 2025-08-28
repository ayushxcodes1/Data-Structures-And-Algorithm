#include <bits/stdc++.h>

using namespace std;

//Brute Force
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

bool func(vector<int> &arr, int capacity) {
    int n = arr.size();
    int sum = 0;
    int days = 0;
    int rem = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == capacity) {
            days++;
            sum = 0;
            sum += rem;
        }
        else if(sum > capacity) {
            rem += (sum % capacity);
            day++;
        }
    }
}

int shipPackages(vector<int> &arr, int days) {
    int n = arr.size();
    int arraySum = findArraySum(arr);
    for(int i = 1; i <= arraySum; i++) {
        bool allShipped = func(arr, i);
        if(allShipped == true) {
           return i;
        }
    }
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int days = 5;

  int ans = shipPackages(arr, days);
  cout << ans << "\n";
  
  return 0;
}