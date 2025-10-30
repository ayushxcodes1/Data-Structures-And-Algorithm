#include <bits/stdc++.h>

using namespace std;

int stringToInteger(string s) {
  //skip spaces
  //s[i] == '-' -> res += s[i]; 
  //s[i + 1] !isdigit - return res
  // res < -2^31 -> round(-2^31)
  // res > 2^31 - 1 -> round(2^31 - 1)

  int res = 0;
  
  for(int i = 0; i < s.length(); i++) {
      
  }
}

int main() {
  string s = "-1337c0d3";
  return 0;
}