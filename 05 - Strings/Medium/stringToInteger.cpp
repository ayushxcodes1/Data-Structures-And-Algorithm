#include <bits/stdc++.h>

using namespace std;

//Optimal - TC(N), SC: O(1)
int stringToInteger(string s) {
  int i = 0;
  int sign = 1;
  long res = 0;
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
    res = res * 10 + (s[i] - '0');

    if(res * sign < INT_MIN) return INT_MIN; 
    if(res * sign > INT_MAX) return INT_MAX; 

    i++;
  }

  return (int)(res * sign);
}

int main() {
  string s = "0-1";
  int res = stringToInteger(s);
  cout << res << endl;
  return 0;
}