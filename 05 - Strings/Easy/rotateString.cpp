#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
bool rotateString(string s, string goal) {
    int n = s.size();
    int m = goal.size();
    if(n != m) return false;

    for(int i = 0; i < n; i++) {
        if(s == goal) return true;
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    return false;
}

//Optimal 1 - TC: O(N), SC: O(N)
bool rotateString2(string s, string goal) {
    int n = s.size();
    int m = goal.size();
    if(n != m) return false;

    string doubledS = s + s; //O(2N)
    return doubledS.find(goal) != string::npos;
}

//Optimal 2 - TC: O(N), SC: O(N) - KMP Algorithm
bool rotateString3(string s, string goal) {
    int n = s.size();
    int m = goal.size();
    if(n != m) return false;

    vector<int> result;
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << "Brute: " << ans << endl;

  bool ans2 = rotateString2(s, goal);
  cout << "Optimal 1: " << ans2 << endl;
  
  bool ans3 = rotateString2(s, goal);
  cout << "Optimal 2 : " << ans3 << endl;

  return 0;
}