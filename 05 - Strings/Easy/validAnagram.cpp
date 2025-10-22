#include <bits/stdc++.h>

using namespace std;

//Brute Force
bool isAnagram(string s, string t) {
  if(s.size() != t.size()) return false;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  if(s == t) return true;
  return false;
}

int main() {
  string s = "anagram";
  string t = "nagaram";

  bool ans = isAnagram(s, t);
  cout << ans;

  return 0;
}