#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int countSubstrings(string s) {
    int n = s.length();
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        bool isA = false;
        bool isB = false;
        bool isC = false;
        for(int j = i; j < n; j++) {
            if(s[j] == 'a') isA = true;
            else if(s[j] == 'b') isB = true;
            else isC = true;

            if(isA == true && isB == true && isC == true) {
               cnt++;
            }
        }
    }
    return cnt;
}

//Optimal - TC: O(N^2), SC: O(1) - Sliding Window 
int countSubstrings(string s) {
    int n = s.length();
    vector<int> lastSeen(3, -1);
    int cnt = 0;

    for(int i = 0; i < n; i++) {
    
    }
    return cnt;
}

int main() {
  string s = "abcabc";
  int ans = countSubstrings(s);
  cout << ans << endl;
  return 0;
}