#include <bits/stdc++.h>

using namespace std;

int countSubstrings(string s) {
    int n = s.length();
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        bool isA = false;
        bool isB = false;
        bool isC = false;
        for(int j = 0; j < n; j++) {
            if(s[j] == 'a') isA = true;
            else if(s[j] == 'b') isB = true;
            else isC = true;

            if(isA == true && isB == true && isC == true) {
               cnt++;
            }
        }
    }
    return cnt;
}

int main() {
  string s = "abcabc";
  int ans = countSubstrings(s);
  return 0;
}