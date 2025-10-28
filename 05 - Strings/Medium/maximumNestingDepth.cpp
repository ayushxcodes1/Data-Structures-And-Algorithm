#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N), SC: O(N) - Stack
int maxDepth(string s) { 
    stack<char> st;
    
    int depth = 0;
    int maxDepth = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' ||  s[i] == '[' || s[i] == '{') {
           st.push(s[i]);
           depth = st.size();
           maxDepth = max(depth, maxDepth);
        }
        else if(s[i] == ')' ||  s[i] == ']' || s[i] == '}') {
            st.pop();
            depth--;
        }
    }
    return maxDepth;
}

//Optimal - TC: O(N), SC: O(1) - Depth Counter
int maxDepth3(string s) { 
    int depth = 0;
    int maxDepth = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(' ||  s[i] == '[' || s[i] == '{') {
           depth++;
           maxDepth = max(depth, maxDepth);
        }
        else if(s[i] == ')' ||  s[i] == ']' || s[i] == '}') {
           depth--;
        }
    }
    return maxDepth;
}

int main() {
  string s = "(1+(2*3)+((8)/4))+1";

  int ans = maxDepth(s);
  cout << "Brute: " << ans << endl;

  int ans3 = maxDepth3(s);
  cout << "Optimal: " << ans3 << endl;
  return 0;
}