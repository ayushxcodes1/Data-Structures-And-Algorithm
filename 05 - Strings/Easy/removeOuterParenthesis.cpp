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

int main() {
  string s = "(()())(())";
  return 0;
}