#include <bits/stdc++.h>

using namespace std;

int countSubstrings(string s) {
    int n = s.length();

    for(int i = 0; i < n; i++) {
        bool isA = false;
        bool isB = false;
        bool isC = false;
        for(int j = 0; j < n; j++) {
            if(s[j] == 'a') isA = true;
            if(s[j] == 'b') isB = true;
            if(s[j] == 'c') isC = true;
        }
    }
}

int main() {
  string s = "abcabc";
  int ans = countSubstrings(s);
  return 0;
}