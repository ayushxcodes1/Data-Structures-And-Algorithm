#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int longestSubArrayWithSumK(vector<int> &arr, int target) {
    int n = arr.size();
    int len = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if(sum == target) {
               len = max(len, j - i + 1);
            }
        }
    }
    return len; 
} 

//Bettter for +ves & 0's - TC: O(), SC: O() / Optimal for both +ves & -ves
int longestSubArrayWithSumK(vector<int> &arr, int target) {
    int n = arr.size();
   
} 


int main() {
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  int k = 7;
  int len = longestSubArrayWithSumK(arr, k);
  cout << "Length of Longest SubArray with Sum K is " << len;
 
  return 0;
}