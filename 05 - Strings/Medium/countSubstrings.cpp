#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int countSubstrings(string s) {
    int n = s.length();
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        bool isA = false, isB = false, isC = false;
        for(int j = i; j < n; j++) {
            if(s[j] == 'a') isA = true;
            else if(s[j] == 'b') isB = true;
            else if(s[j] == 'c') isC = true;

            if(isA && isB && isC) {
               cnt += (n - j);
            }
        }
    }
    return cnt;
}

//Optimal - TC: O(N^2), SC: O(1) - Sliding Window 
int countSubstrings(string s) {
    int n = s.length();
    vector<int> lastSeen(3, -1);  // last positions of 'a', 'b', 'c'
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        lastSeen[s[i] - 'a'] = i;  // update last seen index
        int minLast = min({lastSeen[0], lastSeen[1], lastSeen[2]});
        if(minLast != -1) {
           cnt += (minLast + 1); // all substrings ending at i that include a,b,c
        } 
    }
    return cnt;
}

int main() {
  string s = "abcabc";
  int ans = countSubstrings(s);
  cout << ans << endl;
  return 0;
}