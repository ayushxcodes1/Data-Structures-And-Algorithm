#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N), SC: O(N) - Using Stack
string removeOuterParenthesis(string s) {
    stack<char> st;
    string res = "";

    for(auto c : s) {
        if(c == '(') {
           if(!st.empty()) res += c;
           st.push(c);
        }
        else {
           st.pop();
           if(!st.empty()) res += c;
        }
    }
    return res;
}

//Optimal - TC: O(N), SC: O(1) - Depth Counter
string removeOuterParentheses2(string s) {
    string res = "";
    int cnt = 0;

    for(auto c : s) {
        if(c == '(') {
            if(cnt > 0) res += c;
            cnt++;
        }
        else {
            cnt--;
            if(cnt > 0) res += c;
        }
    }
    return res;
}

int main() {
  string s = "(()())(())";
  string res = removeOuterParenthesis(s);
  cout << "Brute: " << res << endl;

  string res2 = removeOuterParenthesis2(s);
  cout << "Optimal: " << res2;

  return 0;
}