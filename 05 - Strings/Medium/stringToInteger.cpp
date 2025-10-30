#include <bits/stdc++.h>

using namespace std;

//Optimal - TC(N), SC: O(1)
int stringToInteger(string s) {
  int res = 0;
  int sign = 1;

  if(s[0] == '-') {
    sign = -1;
  }
  else {
    res = res * 10 + (s[0] - '0');
  }

  for(int i = 1; i < s.length(); i++) {
    if(res < INT_MIN) res = INT_MIN;
    else if(res > INT_MAX) res = INT_MAX;

    if(s[i] == ' ') continue;
    else if(isdigit(s[i])) {
      res = res * 10 + (s[i] - '0');
    }
    else if(s[i] == '-') {  
      sign = -1;
    }
    else {
      res = res * sign;
      return res;
    }
  }
  res = res * sign;
  return res;
}

int main() {
  string s = "-42c";
  int ans = stringToInteger(s);
  cout << ans << endl;
  return 0;
}