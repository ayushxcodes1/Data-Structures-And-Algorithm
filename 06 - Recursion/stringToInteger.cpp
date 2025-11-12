#include <bits/stdc++.h>

using namespace std;

int myAtoi(string s, int i) {
    int n = s.size();
    
    if(i == n) return;
}

int main() {
  string s = "-42"; 
  int ans = myAtoi(s, 0);
  cout << ans << endl;
  return 0;
}