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

//Better for +ves & 0's - TC: O(NlogN), SC: O(N) / Optimal for +ves, -ves & 0's
int longestSubArrayWithSumK2(vector<int> &arr, int k) {
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
    return maxLen;
} 

//Optimal - TC: O(N), SC: O(1)
int longestSubArrayWithSumK3(vector<int> &arr, int k) {
    int n = arr.size();
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;

    while(right < n) {
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return maxLen; 
} 

int main() {
  vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 3, 3};
  int k = 3;
  int res = longestSubArrayWithSumK(arr, k);
  cout << "Length of Longest SubArray with Sum K is " << res << "\n";

  int res2 = longestSubArrayWithSumK2(arr, k);
  cout << "Length of Longest SubArray with Sum K is " << res2;
 
  int res3 = longestSubArrayWithSumK3(arr, k);
  cout << "Length of Longest SubArray with Sum K is " << res3;
 
  return 0;
}