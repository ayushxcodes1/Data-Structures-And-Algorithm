#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC:O(N^3), SC: O(1)
bool isPalindrome(string s, int i, int j) {
    int n = s.length();
    int left = i, right = j;
    while(left <= right) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

string longestSubstring(string s) {
    int n = s.length();
    string ans = "";

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            if(isPalindrome(s, i, j)) {
                if(j - i + 1 > ans.size()) {
                   ans = s.substr(i, j - i + 1);
                }
            }
        }
    }
    return ans;
}

//Better 1 - TC: O(N^2), SC: O(N^2) - DP
string longestSubstring2(string s) {
    int n = s.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int st = 0, maxLen = 1;

    for(int i = 0; i < n; i++) dp[i][i] = true;

    for(int i = 0; i < n - 1; i++) {
        
    }
}

//Better 2 - TC:O(N^2), SC: O(1) - Expand Around Center
int expand(string s, int left, int right) {
    while(left >= 0 && right < s.length() && s[left] == s[right]) {
       left--;
       right++;
    }
    return right - left - 1;
}

string longestSubstring3(string s) {
    int n = s.length();
    int st = 0, end = 0;

    for(int i = 0; i < n; i++) {
        int lengthOdd = expand(s, i, i);
        int lengthEven = expand(s, i, i + 1);
        int maxLen = max(lengthOdd, lengthEven);
        if(maxLen > end - st) {
           st = i - (maxLen - 1) / 2;
           end = i + maxLen / 2;
        }
    }
    return s.substr(st, end - st + 1);
}

int main() {
  string s = "babad";
  string ans = longestSubstring(s);
  cout << ans << endl;

  string ans2 = longestSubstring2(s);
  cout << ans2 << endl;
  return 0;
}