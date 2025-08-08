#include <bits/stdc++.h>

using namespace std;

//Brute Force
int longestSubArray(vector<int> &arr, int k) {
    int n = arr.size();
    int len = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            for(int k = i; k <= j; k++) {
                sum += arr[k];
                if(sum == k) {
                   len = max(len, j - i + 1);
                }
            }
        }
    }
}

int main() {
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  int k = 7;
  int len = longestSubArray(arr, 7);
  cout << "Length is " << len;
 
  return 0;
}