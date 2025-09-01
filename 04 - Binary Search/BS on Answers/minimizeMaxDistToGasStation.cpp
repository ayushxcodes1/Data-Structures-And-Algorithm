#include <bits/stdc++.h>

using namespace std;

double minimizeMaxDist(vector<int> &stations, int k) {
    int n = stations.size();
    vector<int> howMany(n - 1, 0);
    for(int gasStation = 1; gasStation <= k; gasStation++) {
        double maxSection = -1;
        int maxInd = -1;
        for(int i = 0; i < n - 1; i++) {
            double diff = (stations[i + 1] - stations[i]);
            double sectionLen = diff / (double)(howMany[i] + 1);
            if(sectionLen > maxSection) {
               maxSection = sectionLen;
               maxInd = i;
            }
        }
        howMany[maxInd]++;
    }

    double maxAns = -1;
    for(int i = 0; i < n - 1; i++) {
        double diff = (stations[i + 1] - stations[i]);
        double sectionLen = diff / (double)(howMany[i] + 1);
        maxAns = max(maxAns, sectionLen);
    }
    return maxAns;
}

int main() {
  vector<int> stations = {3, 6, 12, 19, 33};
  int k = 3;

  double ans = minimizeMaxDist(stations, k);
  cout << ans << "\n";
  return 0;
}