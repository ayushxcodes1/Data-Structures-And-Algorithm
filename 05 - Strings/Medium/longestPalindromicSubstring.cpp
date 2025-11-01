#include <bits/stdc++.h>

using namespace std;

string longestSubstring(string s) {
    int n = s.length();
    string ans = "";

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            ans += s[i];
        }
    }
}

int main() {
  string s = "babad";
  string ans = longestSubstring(s);
  return 0;
}