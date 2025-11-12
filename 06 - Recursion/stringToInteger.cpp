#include <bits/stdc++.h>

using namespace std;

int helper(string s, int i, long long ans, int sign) {
    int n = s.length();
    
    if(i == n || !isdigit(s[i])) {
       return (int)(ans * sign);
    }

    ans = ans * 10 + (s[i] - '0');
    
    if(ans < INT_MIN) return INT_MIN;
    if(ans > INT_MAX) return INT_MAX;

    return helper(s, i + 1, ans, sign);
}

int myAtoi(string s, int i = 0) {
    int n = s.size();
    
    //skip leading whitespaces
    while(i < n && s[i] == ' ') i++;
    
    //signedness
    int sign = 1;
    if(i < n && (s[i] == '-' || s[i] == '+')) {
       if(s[i] == '-') sign = -1;
       i++;
    }

    return helper(s, i, 0, sign);
}

int main() {
  string s = "-42"; 
  int ans = myAtoi(s);
  cout << ans << endl;
  return 0;
}