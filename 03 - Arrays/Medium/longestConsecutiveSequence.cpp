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

//Brute Force - TC: O(N^3), SC: O(1)
int longestConsecutiveSequence(vector<int> &arr) {
    int n = arr.size();
    int longest = 1;
    int cnt;
    for(int i = 0; i < n; i++) {
        int x = arr[i];
        cnt = 1;
        while(ls(arr, x + 1) == true) {
            x += 1;
            cnt += 1;
        }
    }
    return cnt;
}

//Better - TC: O(NlogN + N), SC: O(1)
int longestConsecutiveSequence2(vector<int> &arr) {
    int n = arr.size();
    if(n == 0) return 0;

    sort(arr.begin(), arr.end());
    
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;  
    for(int i = 0; i < n; i++) {
        if(arr[i] - 1 == lastSmaller) {
           cnt += 1;
           lastSmaller = arr[i];
        }
        else if(lastSmaller != arr[i]) {
            cnt = 1;
            lastSmaller = arr[i];
        }
    }
    longest = max(longest, cnt);
    return longest;
}



int main() {
  vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
  int ans = longestConsecutiveSequence(arr); 
  cout << ans;

  int ans2 = longestConsecutiveSequence2(arr); 
  cout << ans2;
  return 0;
}