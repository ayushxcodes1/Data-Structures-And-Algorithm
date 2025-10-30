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
    i++;
  }

  while(i < n &&  isdigit(s[i])) {
    ans = ans * 10 + (s[i] - '0');

    if(ans * sign < INT_MIN) return INT_MIN; 
    if(ans * sign > INT_MAX) return INT_MAX; 
  }
}

int main() {
  string s = "-42c";
  int ans = stringToInteger(s);
  cout << ans << endl;
  return 0;
}