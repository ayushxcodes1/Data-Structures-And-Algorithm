#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N), SC: O(N)
string reverseWords(string s) {
    stack<string> st;
    string word = "";
    string ans = "";

    //O(N)
    for(auto c : s) {
        if(c == ' ' && word == "") continue;
        else if(c == ' ' && word != "") {
            st.push(word);
            word = "";  
        }
        else word += c;
    }
    if(word != "") st.push(word);

    //O(N)
    while(!st.empty()) {
        ans += st.top();
        st.pop();
        if(!st.empty()) ans += " ";
    }
    return ans;
}

//Optimal - TC: O(N), SC: O(1)

int main() {
  string s = "  hello  world  ";

  string ans = reverseWords(s);
  cout << ans << endl;
  return 0;
}