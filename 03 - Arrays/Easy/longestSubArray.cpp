#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int longestSubArray2(vector<int> &arr, int target) {
    int n = arr.size();
    int len = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == target) {
               len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

//Better
int longestSubArray2(vector<int> &arr, int target) {
    int n = arr.size();
    int len = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == target) {
               len = max(len, j - i + 1);
            }
        }
    }
    return len;
}



int main() {
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  int k = 7;
  int len = longestSubArray2(arr, 7);
  cout << "Length of Longest SubArray with Sum K is " << len;
 
  return 0;
}