#include <bits/stdc++.h>

using namespace std;

//Brute 1 - TC: O(N^2), SC: O(N) - Using substr()
bool rotateString(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;
    
    for(int i = 0; i < n; i++) {
        s = s.substr(1) + s[0];
        if (s == goal) return true;
    }
    return false;
}

//Brute 2 - TC: O(N^2), SC: O(1) - Manual
bool rotateString2(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;

    for(int i = 0; i < n; i++) {
        if(s == goal) return true;
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    return false;
}

//Optimal - TC: O(N), SC: O(N)
bool rotateString3(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;

    string doubledS = s + s; //O(2N)
    return doubledS.find(goal) != string::npos;
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << "Brute: " << ans << endl;

  bool ans3 = rotateString2(s, goal);
  cout << "Brute 2: " << ans3 << endl;

  bool ans2 = rotateString3(s, goal);
  cout << "Optimal: " << ans2 << endl;

  return 0;
}