#include <bits/stdc++.h>

using namespace std;

bool isomorphicString(string s, string t) {
    unordered_map<char, char> mpp;
    
    mpp[s[0]] = t[0];
    s[0] = t[0];

    for(int i = 1; i < s.size(); i++) {
        if(mpp.find(s[i]) != mpp.end()) {

        }
    }
}

int main() {
  string s = "egg";
  string t = "add";

  bool ans = isomorphicString(s, t);
  return 0;
}