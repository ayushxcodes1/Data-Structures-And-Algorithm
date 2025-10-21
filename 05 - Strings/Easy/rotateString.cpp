#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
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

//Optimal - TC: O(N), SC: O(1)
bool rotateString(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;
   
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << ans;

  return 0;
}