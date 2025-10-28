#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N), SC: O(1) - Depth Counter
int maxDepth(string s) { 
    int depth = 0;
    int maxDepth = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' ||  s[i] == '[' || s[i] == '{') {
           depth++;
           maxDepth = max(depth, maxDepth);
        }
        else if(s[i] == ')' ||  s[i] == ']' || s[i] == '{') {
           depth--;
        }
    }
    return maxDepth;
}

int main() {
  string s = "(1+(2*3)+((8)/4))+1";

  int ans = maxDepth(s);
  cout << "Optimal: " << ans << endl;

//   string ans2 = frequencySort2(s);
//   cout << "Better: " << ans << endl;

//   string ans3 = frequencySort3(s);
//   cout << "Optimal: " << ans3 << endl;
  return 0;
}