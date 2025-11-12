#include <bits/stdc++.h>

using namespace std;

int myAtoi(string s, int i) {
    int n = s.size();
    int ans = 0;
    int sign = 1;
    
    if(i == n) return;

    if(s[i] == ' ') {
       myAtoi(s, i + 1);
    }

    if(s[i] == '-') {
       sign = -1;
    } else 
       sign = 1;

    if(isdigit(s[i])) {
       ans = ans * 10 + (s[i] - '0');
    }
    
    if(ans < INT_MIN) ans = INT_MIN;
    if(ans > INT_MAX) ans = INT_MAX;
}

int main() {
  string s = "-42"; 
  int ans = myAtoi(s, 0);
  cout << ans << endl;
  return 0;
}