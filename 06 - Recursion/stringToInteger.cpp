#include <bits/stdc++.h>

using namespace std;

int helper(string s, int i, long ans, int sign) {
    if(i == n || !isdigit(s[i])) {
       return (int)ans * sign;
    }

    return helper(s, i + 1, ans, sign);
}

int myAtoi(string s, int i = 0) {
    int n = s.size();
    
    //skip leading whitespaces
    while(i < n && s[i] == ' ') i++;
    
    //signedness
    int sign = 1;
    if(s[i] == '-') {
       sign = -1;
    } else 
       sign = 1;

    return helper(s, i, 0, sign);
}

int main() {
  string s = "-42"; 
  int ans = myAtoi(s);
  cout << ans << endl;
  return 0;
}