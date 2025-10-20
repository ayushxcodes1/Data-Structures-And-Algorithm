#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<int> &s) {
    int n = s.size();
    string word = "";
    string word2 = "";
    string ans = "";
    int i = 0;
    while(i < n) {
        word += s[i];
        i++;
        word2 += s[i];

        int l = 0;
        int r = 0;
        if(word[l] == word2[r]) {
           ans += word[l]
           l++;
           r++;
        }
    }
}    

int main() {
  vector<string> s = {"flower", "flow", "flight"};
  return 0;
}