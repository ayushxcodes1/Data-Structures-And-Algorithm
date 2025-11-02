#include <bits/stdc++.h>

using namespace std;

//O(N)
bool isPalindrome(string s, int i, int j) {
    int n = s.length();
    int left = i, right = j;
    while(left <= right) {
        if(s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

//Brute Force - TC:O(N^3), SC: O(1)
string longestSubstring(string s) {
    int n = s.length();
    string ans = "";

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            if(isPalindrome(s, i, j)) {
                if(j - i + 1 > ans.size()) {
                   ans = s.substr(i, j - i + 1);
                }
            }
        }
    }
    return ans;
}

//Optimal - TC:O(N^3), SC: O(1)
string longestSubstring(string s) {
    int n = s.length();
    string ans = "";

    for(int i = 0; i < n; i++) {    
        for(int j = i; j < n; j++) {
            if(isPalindrome(s, i, j)) {
                if(j - i + 1 > ans.size()) {
                   ans = s.substr(i, j - i + 1);
                }
            }
        }
    }
    return ans;
}

int main() {
  string s = "babad";
  string ans = longestSubstring(s);
  cout << ans << endl;
  return 0;
}