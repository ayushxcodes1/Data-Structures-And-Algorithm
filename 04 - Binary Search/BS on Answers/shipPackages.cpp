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

int shipPackages(vector<int> &arr, int threshold) {
    
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int days = 5;

  int ans = shipPackages(arr, days);
  cout << ans << "\n";
  
  return 0;
}