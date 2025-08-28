#include <bits/stdc++.h>

using namespace std;

//Brute Force
int findDivisor(vector<int> &arr, int n) {
    

}

int smallestDivisor(vector<int> &arr, int threshold) {
    int n = arr.size();
    for(int i = 1; i <= threshold; i++) {
        findDivisor(arr, n);
    }
}

int main() {
  vector<int> arr = {1, 2, 5, 9};
  int threshold = 6;

  int ans = smallestDivisor(arr, threshold);
  cout << ans;
  
  return 0;
}