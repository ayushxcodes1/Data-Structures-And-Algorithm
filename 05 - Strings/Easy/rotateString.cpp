#include <bits/stdc++.h>

using namespace std;

bool rotateString(string s, string goal) {
    int n = s.size();
    
    for(int i = 0; i < n - 2; i++) {
        char temp = s[0];
        for(int j = 1; j < n; j++) {
            s[j - 1] = s[j]; 
        }
        s[n - 1] = temp;
        if(s == goal) return true;
    }
    return false;
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << ans;

  return 0;
}