#include <bits/stdc++.h>

using namespace std;

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

    helper(s, i, 0, sign);
}

int main() {
  string s = "-42"; 
  int ans = myAtoi(s);
  cout << ans << endl;
  return 0;
}