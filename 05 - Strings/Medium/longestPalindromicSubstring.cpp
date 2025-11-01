#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    int i = 0, j = n - 1;
    while(i < j) {
        
    }
}

string longestSubstring(string s) {
    int n = s.length();
    string curr = "";
    string ans = "";
    int maxLen = 0;

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            curr += s[i];
            bool check = isPalindrome(curr);
            if(check) {
                if(curr.length() > maxLen) {
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
  return 0;
}