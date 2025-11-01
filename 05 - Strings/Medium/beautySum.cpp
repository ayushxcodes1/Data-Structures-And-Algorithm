#include <bits/stdc++.h>

using namespace std;

pair<int, int> getMinMaxFreq(string s, int i, int j) {
    int freq[26] = {0};

  //O(N)
  for(int k = i; k <= j; k++) {
    freq[s[k] - 'a']++;
  }

  int minFreq = INT_MAX;
  int maxFreq = INT_MIN;
  
  //O(N)
    for(int k = 0; k < 26; k++) {
      if(freq[k] > 0) {
        minFreq = min(minFreq, freq[k]);
        maxFreq = max(maxFreq, freq[k]);
      }
    }

  return {minFreq, maxFreq};
}

//Brute Force - TC: O(N^3), SC: O(1)
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