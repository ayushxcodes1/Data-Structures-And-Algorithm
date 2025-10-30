#include <bits/stdc++.h>

using namespace std;

//Optimal - TC(N), SC: O(1)
int stringToInteger(string s) {
  int i = 0;
  int sign = 1;
  int ans = 0;
  int n = s.length();

  while(i < n && s[i] == ' ') i++;

  if(s[i] == '-') {
    sign = -1;
    i++;
  }
  else if(s[i] == '+') {
    sign = 1;
    i++;
  }
}

int main() {
  string s = "-42c";
  int ans = stringToInteger(s);
  cout << ans << endl;
  return 0;
}