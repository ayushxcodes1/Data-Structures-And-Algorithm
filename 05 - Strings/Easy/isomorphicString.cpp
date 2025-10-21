#include <bits/stdc++.h>

using namespace std;

//Optimal - TC: O(N), SC: O(1) - Map
bool isomorphicString(string s, string t) {
    unordered_map<char, char> m1, m2;

    for(int i = 0; i < s.size(); i++) {
        char c1 = s[i];
        char c2 = t[i];

         // If c1 was seen before
        if (m1.find(c1) != m1.end()) {
            if (m1[c1] != c2) return false;  // mismatch mapping
        } 
        // If c2 was seen before (someone else already mapped to c2)
        else if (m2.find(c2) != m2.end()) {
            if (m2[c2] != c1) return false;  // reverse mismatch
        } 
        // Create new mapping
        else {
            m1[c1] = c2;
            m2[c2] = c1;
        }
    }
    return true;
}

int main() {
  string s = "egg";
  string t = "add";

  bool ans = isomorphicString(s, t);
  return 0;
}