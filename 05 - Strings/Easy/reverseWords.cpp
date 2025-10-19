#include <bits/stdc++.h>

using namespace std;

//Brute Force

//Approach 1 - TC: O(N), SC: O(N) - Using Stack
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

//Approach 2 - TC: O(N), SC: O(N) - Using STL
string reverseWords(string s) {
    stringstream ss(s);
    string token = "";
    string ans = "";
    int n = s.length();

    while(ss >> token) {
        ans = token + " " + ans;
    }
    return ans.substr(0, n-1);
}

//Optimal - TC: O(N), SC: O(1)
string reverseWords(string s) {
    
}

int main() {
  string s = "  hello  world  ";

  string ans = reverseWords(s);
  cout << ans << endl;
  return 0;
}