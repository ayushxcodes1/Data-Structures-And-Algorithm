#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(NlogN), SC: O(1)
int largestElement(vector<int> &arr, int n) {
   sort(arr.begin(), arr.end());
   return arr[n - 1];
}

//Optimal - TC: O(N), SC: O(1)
int largestElement2(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
           largest = arr[i];
        }   
    }
    return largest;
}

int main() {
  vector<int> arr = {2, 8, 6, 13, 5, 9};
  int n = arr.size();
  int res = largestElement2(arr, n);
  cout << "Largest Element: " << res;
  return 0;
}