#include <bits/stdc++.h>

using namespace std;

//Brute Force

//Approach 1 - TC: O(N), SC: O(N) - Using Stack
string reverseWords(string s) {
    stack<string> st;
    string word = "";
    
    // O(N)
    for(auto c : s) {
        if(c == ' ') {
            if(!word.empty()) {
                st.push(word);
                word = "";
            }
        }
        else {
            word += c;
        }
    }
    if(!word.empty()) st.push(word);
    
    // O(N) 
    string ans;
    ans.reserve(s.length());
    
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
    string token;
    vector<string> words;

    while (ss >> token)
        words.push_back(token);

    reverse(words.begin(), words.end());

    return join(words.begin(), words.end(), " ");
}



//Approach 3 - TC: O(N), SC: O(N) 
string reverseWords3(string s) {
    int n = s.length();
    string ans = "";
    
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

    int i = 0;
    int l = 0, r = 0;
    int n = s.length();
    while(i < n) {
        while(i < n && s[i] != ' ') {
            s[r++] = s[i++];
        }

        if(l < r) {
           reverse(s.begin() + l, s.begin() + r);

           s[r] = ' ';
           r++;

           l = r;
        }
        i++;
    }
    s = s.substr(0, r-1);
    return s;
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