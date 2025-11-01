#include <bits/stdc++.h>

using namespace std;

int findMostFreqCnt(string s, int i, int j) {
  int n = s.length();
  int mostFqCnt = 0, leastFqCnt = 0;
  unordered_map<char, int> mpp;

  for(auto ch : s) {
    mpp[ch]++;
  }
  return cnt;
}

int beautySum(string s) {
  int n = s.length();
  int ans = 0;
  
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      int mostFqCnt = findMostFreqCnt(s, i, j);
      int leastFqCnt = findLeastFreqCnt(s, i, j);
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