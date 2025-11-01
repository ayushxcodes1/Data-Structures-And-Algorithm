#include <bits/stdc++.h>

using namespace std;

pair<int, int> getMinMaxFreq(string s, int i, int j) {
  unordered_map<char, int> mpp;

  //O(N)
  for(int k = i; k <= j; k++) {
    mpp[s[k]]++;
  }

  int minFreq = INT_MAX;
  int maxFreq = INT_MIN;
  
  //o(N)
  for(auto &p : mpp) {
    minFreq = min(minFreq, p.second);
    maxFreq = max(maxFreq, p.second);
  }

  return {minFreq, maxFreq};
}

int beautySum(string s) {
  int n = s.length();
  int ans = 0;
  
  for(int i = 0; i < n; i++) {
    for(int j = i; j < n; j++) {
      pair<int, int> freqPair = getMinMaxFreq(s, i, j);
      int minFreq = freqPair.first;
      int maxFreq = freqPair.second;
      int diff = maxFreq - minFreq;

      if(diff > 0) {
        ans += diff;
      }
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