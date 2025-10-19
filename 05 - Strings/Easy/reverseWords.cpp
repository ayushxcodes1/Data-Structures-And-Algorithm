#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s) {
    stack<string> st;
    string word = "";

    for(auto c : s) {
        if(c == ' ' && word == "") continue;
        else if(c == ' ' && word != "") {
            st.push(word);
            word = "";  
        }
        else word + c;
    }

    word += st.top();
    st.pop();
    word += " ";
    word += st.top();
    st.pop();

    
}

int main() {
  string s = "  hello  world  ";
  int n = s.length();
  return 0;
}