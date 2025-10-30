#include <bits/stdc++.h>

using namespace std;

int stringToInteger(string s) {
  int res = 0;

  for(int i = 0; i < s.length(); i++) {
    if(s[i] == ' ') continue;
    else if(isdigit(s[i])) {
      res = res * 10 + (s[i] - '0');
    }
 
  }
}

int main() {
  string s = "-1337c0d3";
  return 0;
}