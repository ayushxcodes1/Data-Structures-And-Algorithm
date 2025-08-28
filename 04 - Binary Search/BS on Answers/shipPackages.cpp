#include <bits/stdc++.h>

using namespace std;

//Brute Force
int sumOfN(vector<int> &arr) {
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
    int days = 1;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum >= capacity) {
            days++;
            sum = 0;
        }
    }

}

int shipPackages(vector<int> &arr, int days) {
    int n = arr.size();
    int sum = sumOfN(arr);
    for(int i = 1; i <= sum; i++) {
        bool x = func(arr, i);
        if(x == true) {
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