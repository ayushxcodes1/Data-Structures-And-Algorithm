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
        else word += c;
    }
    if(word != "") st.push(word);

    //building answer
    while(!st.empty()) {
        word += st.top();
        st.pop();
        if(!st.empty()) word += " ";
    }
    return word;
}

int main() {
  string s = "  hello  world  ";

  string ans = reverseWords(s);
  cout << ans << endl;
  return 0;
}