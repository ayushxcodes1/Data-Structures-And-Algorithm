#include <bits/stdc++.h>

using namespace std;

//Optimal - TC: O(N), SC: O(1) - Map
bool isomorphicString(string s, string t) {
    int m1[256] = {0};
    int m2[256] = {0};

    int n = s.size();

    for(int i = 0; i < n; i++) {
        if(m1[s[i]] != m2[t[i]]) return false;
        
        m1[s[i]] = i + 1;
        m1[t[i]] = i + 1;
    }
    return true;
}

int main() {
  string s = "egg";
  string t = "add";

  bool ans = isomorphicString(s, t);
  return 0;
}