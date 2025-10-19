#include <bits/stdc++.h>

using namespace std;

//Approach 1 - TC: O(N), SC: O(N) - Using Stack
bool validParenthesis(string s) {
    stack<char> st;

    for(auto c : s) {
        if(c == '(' || c == '{' || c == '[') {
           st.push(c);
        }
        else {
            if(st.empty()) return false;

            if(c == ')' && st.top() != '(' ||
               c == '}' && st.top() != '{' ||
               c == ']' && st.top() != '[') {
               return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
//Approach 2 - TC: O(N), SC: O(N)
bool validParenthesis(string s) {
    stack<char> st;

    for(auto c : s) {
        if(c == '(') {
           st.push(')');
        }
        else if(c == '{') {
           st.push('}');
        }
        else if(c == '[') {
           st.push(']');
        }
        else if(st.empty() || st.top() != c) {
           return false;
        }
        else {
            st.pop();
        }
    }
    return st.empty();
}

int main() {
  string s = "(()())(())";
  bool res = validParenthesis(s);
  cout << "Brute: " << res << endl;

  return 0;
}