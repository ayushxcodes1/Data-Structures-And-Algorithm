#include <bits/stdc++.h>

using namespace std;

bool canWePlace(vector<int> &stalls, int dist, int k) {
    int n = stalls.size();
    int cntCows = 1;
    int last = stalls[0];
    for(int i = 1; i < n; i++) {
        if(stalls[i] - last >= dist) {
           cntCows++;
           last = stalls[i];
        }
    }
    if(cntCows >= k) return true;
    else return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int limit = stalls[n - 1] - stalls[0];
    for(int i = 1; i <= limit; i++) {
        if(canWePlace(stalls, i, k) == false) {
           return (i - 1);
        }
    }
    return limit;
}

int main() {
  vector<int> stalls = {0, 3, 4, 7, 9, 10};
  int k = 4;

  int ans = aggressiveCows(stalls, k);
  cout << ans;
  return 0;
}