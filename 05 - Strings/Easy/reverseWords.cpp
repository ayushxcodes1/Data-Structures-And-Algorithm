#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s) {
    stack<string> st;
    string word = "";

    for(auto c : s) {
        if(c == ' ' && word == "") continue;
        else word + c;
    }
}

int main() {
  string s = "  hello  world  ";
  int n = s.length();
  return 0;
}