#include <bits/stdc++.h>

using namespace std;

int countSubstrings(string s) {
    int n = s.length();
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        cout << "i = " << i << endl; 
        bool isA = false;
        bool isB = false;
        bool isC = false;
        cout << "isA = " << isA;
        cout << "isB = " << isB;
        cout << "isC = " << isC;
        for(int j = 0; j < n; j++) {
            cout << "j = " << j << endl; 
            if(s[j] == 'a') isA = true;
            else if(s[j] == 'b') isB = true;
            else isC = true;

            if(isA == true && isB == true && isC == true) {
               cnt++;
               cout << "count: " << cnt << endl;
            }
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