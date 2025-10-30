#include <bits/stdc++.h>

using namespace std;

//Optimal - TC(N), SC: O(1)
int stringToInteger(string s) {
  int res = 0;
  int sign = 1;
  int n = s.length();
  
  int i = 0;
  while(i < n && s[i] == ' ') continue;
}

int main() {
  string s = "-42c";
  int ans = stringToInteger(s);
  cout << ans << endl;
  return 0;
}