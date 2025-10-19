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
string reverseWords2(string s) {
    stringstream ss(s);
    string token = "";
    string ans = "";
    
    while(ss >> token) {
        if(ans.empty()) ans = token;
        else ans = token + " " + ans;
    }
    return ans;
}


//Approach 3 - TC: O(N), SC: O(N) 
string reverseWords3(string s) {
    int n = s.length();
    string ans = ""; //extra space
    
    reverse(s.begin(), s.end());
    
    for(int i = 0; i < n; i++) {
        string word = "";
        while(i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }
        
        reverse(word.begin(), word.end());
        
        if(word.length() > 0) {
            ans += " " + word;
        }    
    }
    return ans.substr(1);
}

//Optimal - TC: O(N), SC: O(1) - Two Pointer Approach 
string reverseWords4(string s) {
    reverse(s.begin(), s.end());

    
    
}

int main() {
  string s = "  hello  world  ";

  string ans = reverseWords(s);
  cout << "Brute Using Stack: "<< ans << endl;

  string ans2 = reverseWords2(s);
  cout << "Brute Using STL: " << ans2 << endl;

  string ans3 = reverseWords2(s);
  cout << "Brute 3: " << ans3 << endl;
 
  string ans4 = reverseWords4(s);
  cout << "Optimal: " << ans3 << endl;

  return 0;
}