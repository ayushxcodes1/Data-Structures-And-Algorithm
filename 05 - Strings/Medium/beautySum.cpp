#include <bits/stdc++.h>

using namespace std;

pair<int, int> getMinMaxFreq(string s, int i, int j) {
  int n = s.length();
  unordered_map<char, int> mpp;

  for(int k = i; k <= j; k++) {
    mpp[ch]++;
  }

  int maxFreq = 0, minFreq = 0;
  for(auto ch : s) {
    int sec = ch.second;
    maxFreq = max(maxFreq, sec);
  }
  
}

int beautySum(string s) {
  int n = s.length();
  int ans = 0;
  
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      int mostFqCnt = get
      int diff = mostFqCnt - leastFqCnt;
      ans += diff;
    }
  }
  return ans;
    
}

int main() {
  string s = "aabcbaa";
  int ans = beautySum(s);
  cout << ans << endl;
  return 0;
}