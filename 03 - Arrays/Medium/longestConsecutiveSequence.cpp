#include <bits/stdc++.h>

using namespace std;

int ls(vector<int> arr, int num) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
           return true;
        }
    }
    return false;
}

int longestConsecutiveSequence(vector<int> &arr) {
    int n = arr.size();
    int longest = 1;
    int cnt;
    for(int i = 0; i < n; i++) {
        int x = arr[i];
        cnt = 1;
        while(ls(arr, x + 1) == true) {
            x = x + 1;
            cnt = cnt + 1;
        }
    }
    return cnt;
}

int main() {
  vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
  int ans = longestConsecutiveSequence(arr); 
  cout << ans;
  return 0;
}