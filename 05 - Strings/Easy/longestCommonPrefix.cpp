#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N * M), SC: (M)
string longestCommonPrefix(vector<string> &s) {
    int n = s.size();
    if(n == 0) return "";

    string ans = s[0];

    //O(N)
    for(int i = 1; i < n; i++) {
        string curr = s[i];
        string temp = "";   
        int len = min(ans.size(), curr.size());

        //O(M)
        for(int j = 0; j < len; j++) {
            if(ans[j] == curr[j]) temp += ans[j];
            else break;
        }

        ans = temp;
        if(ans.empty()) return "";
    }
    return ans;
}

//Optimal - TC: O(N * M), SC: (1)
string longestCommonPrefix2(vector<string> &s) {
    if(s.empty()) return "";

    int n = s.size();
    int prefixLen = s[0].size();

    for(int i = 1; i < n; i++) {
        prefixLen = min(prefixLen, (int)s[i].size());
        for(int j = 0; j < prefixLen; j++) {
            if(s[i][j] != s[0][j]) {
               prefixLen = j;
               break;
            }
        }
        if(prefixLen == 0) return "";
    }
    return s[0].substr(0, prefixLen);
}    

int main() {
  vector<string> s = {"flower", "flow", "flight"};
  string ans = longestCommonPrefix(s);
  cout << ans;
  return 0;
}