#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    int left = 0, right = n - 1;
    while(left <= right) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

//Brute Force - TC:O(N^3), SC: O(1)
string longestSubstring(string s) {
    int n = s.length();
    string ans = "";
    int maxLen = 0;

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            string curr = s.substr(i, j - i + 1);
            if(isPalindrome(curr)) {
                int len = curr.length();
                if(len > maxLen) {
                   maxLen = len;
                   ans = curr;
                }
            }
        }
    }
    return ans;
}

int main() {
  string s = "babad";
  string ans = longestSubstring(s);
  cout << ans << endl;
  return 0;
}