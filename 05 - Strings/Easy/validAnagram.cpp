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
bool isAnagram2(string s, string t) {
  if(s.size() != t.size()) return false;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}

//Optimal - TC: (N), SC: O(1)
bool isAnagram3(string s, string t) {
  if(s.size() != t.size()) return false;
  
  vector<int> count(26, 0);

  for(char c : s) count[c - 'a']++;
  for(char c : t) count[c - 'a']--;

  for(int val : count) {
    if(val != 0) return false;
  }
  return true;
}

int main() {
  string s = "anagram";
  string t = "nagaram";

  bool ans = isAnagram(s, t);
  cout << "Brute: " << ans << endl;

  bool ans2 = isAnagram2(s, t);
  cout << "Better " << ans2 << endl;

  bool ans3 = isAnagram3(s, t);
  cout << "Optimal: " << ans3 << endl;

  return 0;
}