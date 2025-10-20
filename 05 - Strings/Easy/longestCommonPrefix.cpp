#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<int> &s) {
    int n = s.size();
    string word1 = "";
    string word2 = "";
    string ans = "";
    int i = 0;
    while(i < n) {
        word1 += s[i];
        i++;
        word2 += s[i];

        int l = 0;
        int r = 0;
        if(word1[l] == word1[r]) {
           ans += word1[l];
           l++;
           r++;
        }
    }
}    

int main() {
  vector<string> s = {"flower", "flow", "flight"};
  return 0;
}