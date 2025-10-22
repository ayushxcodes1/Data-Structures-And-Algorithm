#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N * N!), SC: O(1)
bool isAnagram(string s, string t) {
  if(s.size() != t.size()) return false;
  sort(s.begin(), s.end());
  
  do {
    if(s == t) return true;
  }
  while(next_permutation(s.begin(), s.end()));
  
  return false;
}

//Better - TC: O(NlogN), SC: O(1)
bool isAnagram(string s, string t) {
  if(s.size() != t.size()) return false;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}

//Optimal - TC: (N), SC: O(1)
bool isAnagram(string s, string t) {
  if(s.size() != t.size()) return false;
  
  vector<int> count(26, 0);

  
}

int main() {
  string s = "anagram";
  string t = "nagaram";

  bool ans = isAnagram(s, t);
  cout << ans;

  return 0;
}