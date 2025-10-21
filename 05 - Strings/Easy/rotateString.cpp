#include <bits/stdc++.h>

using namespace std;

//Brute Force

//Approach 1 - TC: O(N^2), SC: O(1)
bool rotateString(string s, string goal) {
    int n = s.size();
    
    for(int i = 0; i < n; i++) {
        char temp = s[0];
        for(int j = 1; j < n; j++) {
            s[j - 1] = s[j]; 
        }
        s[n - 1] = temp;
        if(s == goal) return true;
    }
    return false;
}

//Approach 2 - TC: O(N^2), SC: O(1)
bool rotateString(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;

    for(int i = 0; i < n; i++) {
        s = s.substr(1) + s[0];
        if (s == goal) return true;
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