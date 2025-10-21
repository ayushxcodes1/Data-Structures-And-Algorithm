#include <bits/stdc++.h>

using namespace std;

//Brute Force


//Brute - TC: O(N^2), SC: O(N) - Using substr()
bool rotateString(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;
    
    for(int i = 0; i < n; i++) {
        s = s.substr(1) + s[0];
        if (s == goal) return true;
    }
    return false;
}

//Better - TC: O(N^2), SC: O(1) - Manual
bool rotateString2(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;

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

//Optimal - TC: O(N), SC: O(N)
bool rotateString3(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;

    string doubledS = s + s;
    return doubledS.find(goal) != string::npos;
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << "Brute: " << ans << endl;

  bool ans3 = rotateString2(s, goal);
  cout << "Brute 2: " << ans33 << endl;

  bool ans2 = rotateString3(s, goal);
  cout << "Optimal: " << ans2 << endl;

  return 0;
}