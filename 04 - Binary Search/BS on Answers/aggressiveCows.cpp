#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O((max - min) * N)
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

//Optimal 
int aggressiveCows2(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int limit = stalls[n - 1] - stalls[0];
    int low = 1, high = limit;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(canWePlace(stalls, mid, k) == false) {
           high = mid - 1;
        }
        else low = mid + 1;
    }
    return high;
}

int main() {
  vector<int> stalls = {0, 3, 4, 7, 9, 10};
  int k = 4;

  int ans = aggressiveCows(stalls, k);
  cout << ans << "\n";

  int ans2 = aggressiveCows2(stalls, k);
  cout << ans2;
  return 0;
}