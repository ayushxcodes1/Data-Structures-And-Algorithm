#include <bits/stdc++.h>

using namespace std;

//Optimal - TC(N), SC: O(1)
int stringToInteger(string s) {
  int res = 0;
  int sign = 1;
  int n = s.length();
  
  int i = 0;
  while(i < n && s[i] == ' ') i++; //skip whitespaces
  while(i < n && isdigit(s[i])) {
    res = res * 10 + (s[i] - '0'); //add digit to answer
  }
  while(i < n && res < INT_MIN) res = INT_MIN;
  while(i < n && res > INT_MAX) res = INT_MAX;
}

int main() {
  string s = "-42c";
  int ans = stringToInteger(s);
  cout << ans << endl;
  return 0;
}