#include <bits/stdc++.h>

using namespace std;

//Approach 1
bool isPalindrome(string s, int l, int r) {
   if(l >= r) return true;
   if(s[l] != s[r]) return false;
   return isPalindrome(s, l + 1, r - 1);
}

//Approach 2
bool isPalindrome2(string s, int i, int n) {
   if(i >= n/2) return true;
   if(s[i] != s[n - i - 1]) return false;
   return isPalindrome2(s, i + 1, n);
}

int main() {
  string s = "racecar";
  int n = s.length();

  bool res = isPalindrome(s, 0, n-1);
  cout << boolalpha << res << endl;

  bool res2 = isPalindrome2(s, 0, n);
  cout << boolalpha << res2; 
  return 0;
}