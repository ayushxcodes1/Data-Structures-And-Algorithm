#include <bits/stdc++.h>

using namespace std;

int stringToInteger(string s) {
  //skip spaces
  //s[i] == '-' -> res += s[i]; 
  //s[i + 1] !isdigit - return res
  // res < -2^31 -> round(-2^31)
  // res > 2^31 - 1 -> round(2^31 - 1)

  int res = 0;
  int sign = 1;

  for(auto ch : s) {
    if(ch == ' ') continue;
    else if(ch == '-') {
      sign = -1;
    }
    else if(isdigit(ch)) {
      res = res * 10 + (s[i] )
    }
  }
}

int main() {
  string s = "-1337c0d3";
  return 0;
}