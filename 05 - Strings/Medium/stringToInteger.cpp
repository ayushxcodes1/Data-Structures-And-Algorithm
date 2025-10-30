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
    if(res < INT_MIN) res = INT_MIN;
    else if(res > INT_MAX) res = INT_MAX;

    if(ch == ' ') continue;
    else if(ch == '-') {
      sign = -1;
    }
    else if(isdigit(ch)) {
      res = res * 10 + (ch - '0');
    }
    else {
      return res;
    }
  }
  res = res * sign;
  return res;
}

int main() {
  string s = "-1337c0d3";
  return 0;
}