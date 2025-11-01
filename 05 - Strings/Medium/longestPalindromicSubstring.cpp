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
    string curr = "";
    string ans = "";
    int maxLen = 0;

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            curr += s[j];
            bool check = isPalindrome(curr);
            if(check) {
                int len = curr.length();
                if(len > maxLen) {
                   ans = curr;
                }
                maxLen = max(len, maxLen); 
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