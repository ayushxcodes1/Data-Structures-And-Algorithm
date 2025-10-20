#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<int> &s) {
    int n = s.size();
    string word1 = "";
    string word2 = "";
    string ans = "";
    int i = 0;
    while(i < n) {
        if(ans.empty()) {
            word1 = s[i];
            word2 = s[i + 1];
    
            int l = 0;
            int r = 0;
            while(word1[l] == word2[r]) {
               ans += word1[l];
               l++;
               r++;
            }
            i += 2;
        }
        else {
            word1 = s[i];
            ans 
        }
        ans = "";
    }
}    

int main() {
  vector<string> s = {"flower", "flow", "flight"};
  return 0;
}