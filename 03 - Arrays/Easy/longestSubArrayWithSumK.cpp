#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int longestSubArrayWithSumK(vector<int> &arr, int k) {
    int n = arr.size();
    int len = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];
            if(sum == k) {
               len = max(len, j - i + 1);
            }
        }
    }
    return len; 
} 

//Bettter for +ves & 0's - TC: O(), SC: O() / Optimal for +ves, -ves & 0's
int longestSubArrayWithSumK(vector<int> &arr, int k) {
    int n = arr.size();
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == k) {
           maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()) {
           int len = i - preSumMap[rem];
           maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()) {
           preSumMap[sum] = i;
        }    
    }
} 

int main() {
  vector<int> arr = {10, 5, 2, 7, 1, 9};
  int k = 7;
  int len = longestSubArrayWithSumK(arr, k);
  cout << "Length of Longest SubArray with Sum K is " << len;
 
  return 0;
}