#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC:O(N^3), SC: O(1)
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

string longestPalindrome(string s) {
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

//Better - TC: O(N^2), SC: O(N^2) - DP
string longestPalindrome2(string s) {
    int n = s.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int st = 0, maxLen = 1;

    for(int i = 0; i < n; i++) dp[i][i] = true;

    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1]) {
           dp[i][i + 1] = true;
           st = i;
           maxLen = 2;
        }
    }

    for(int len = 3; len <= n; len++) {
        for(int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if(s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                if(len > maxLen) {
                   st = i;
                   maxLen = len;
                }
            }
        }
    }
    return s.substr(st, maxLen);
}

//Even Better - TC:O(N^2), SC: O(1) - Expand Around Center
int expand(string s, int left, int right) {
    while(left >= 0 && right < s.length() && s[left] == s[right]) {
       left--;
       right++;
    }
    return right - left - 1;
}

string longestPalindrome3(string s) {
    int n = s.length();
    int st = 0, end = 0;

    for(int i = 0; i < n; i++) {
        int lengthOdd = expand(s, i, i);
        int lengthEven = expand(s, i, i + 1);
        int maxLen = max(lengthOdd, lengthEven);
        if(maxLen > end - st) {
           st = i - (maxLen - 1) / 2;
           end = i + maxLen / 2;
        }
    }
    return s.substr(st, end - st + 1);
}

//Optimal - TC: O(N), SC: O(N) - Manacher's Algorithm
string preprocess(const string& s) {
    string t = "^";
    for (char c : s) {
        t += '#';
        t += c;
    }
    t += "#$";
    return t;
}

string longestPalindrome4(string s) {
    if (s.empty()) return "";
    
    string t = preprocess(s);
    int n = t.size();
    vector<int> p(n, 0);
    int c = 0, r = 0;     // center and right boundary
    int maxLen = 0, maxCenter = 0;
    
    for (int i = 1; i < n - 1; i++) {
        // Mirror: use previously computed values
        if (i < r) {
            p[i] = min(r - i, p[2 * c - i]);
        }
        
        // Expand around center i
        while (t[i + p[i] + 1] == t[i - p[i] - 1]) {
            p[i]++;
        }
        
        // Update rightmost boundary
        if (i + p[i] > r) {
            c = i;
            r = i + p[i];
        }
        
        // Track longest palindrome
        if (p[i] > maxLen) {
            maxLen = p[i];
            maxCenter = i;
        }
    }
    
    // Extract result from original string
    return s.substr((maxCenter - maxLen) / 2, maxLen);
}

int main() {
  string s = "babad";
  string ans = longestPalindrome(s);
  cout << ans << endl;

  string ans2 = longestPalindrome2(s);
  cout << ans2 << endl;

  string ans3 = longestPalindrome3(s);
  cout << ans3 << endl;

  string ans4 = longestPalindrome4(s);
  cout << ans4 << endl;
  
  return 0;
}