#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int longestSubArrayWithSumK(vector<int> &arr, int target) {
    
} 


int main() {
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  int k = 7;
  int len = longestSubArrayWithSumK(arr, k);
  cout << "Length of Longest SubArray with Sum K is " << len;
 
  return 0;
}