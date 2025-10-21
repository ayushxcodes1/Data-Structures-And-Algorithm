#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "abcde";
  string goal = "cdeab";

  bool ans = rotateString(s, goal);
  cout << ans;
  
  return 0;
}