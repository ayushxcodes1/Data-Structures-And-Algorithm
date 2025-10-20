#include <bits/stdc++.h>

using namespace std;

//Brute - TC(N), SC: O(N)
string largestOddNumber(string s) {
    int n = s.size();

    for(int i = n - 1; i >= 0; i++) {
        if((s[i] - '0') % 2 == 1) {
            
        }
    }
}

int main() {
  string s = "";

  string ans = largestOddNumber(s);
  cout << ans;

  return 0;
}