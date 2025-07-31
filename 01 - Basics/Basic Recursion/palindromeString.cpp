#include <bits/stdc++.h>

using namespace std;

//Approach 1
bool isPalindrome(string &s, int l, int r) {
   if(l >= r) return true;
   if(s[l] != s[r]) return false;
   return isPalindrome(s, l + 1, r - 1);
}

//Approach 2
bool isPalindrome2(int i, string &s, int n) {
   if(i >= n/2) return true;
   if(s[i] != s[n - i - 1]) return false;
   return isPalindrome2(i + 1, s, n);
}

int main() {
  string s = "racecar";
  int n = s.length();

  bool res = isPalindrome(s, 0, n-1);
  cout << boolalpha << res << endl;

  bool res2 = isPalindrome2(0, s, n);
  cout << boolalpha << res2; 
  return 0;
}