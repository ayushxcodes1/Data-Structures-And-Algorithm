#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    int i = 0, j = n - 1;
    while(i <= j) {
        if(s[i] != s[j]) {
           return false;
        }
        i++;
        j--;
    }
    return true;
}

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