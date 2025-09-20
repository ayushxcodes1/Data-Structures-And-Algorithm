#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(K * N), SC: O(n - 1)
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

//Better - TC: O(NlogN * klogN), SC: O(n - 1 for howMany array) + O(n - 1 for priority queue) - Max Heap Approach
double minimizeMaxDist2(vector<int> &stations, int k) {
    int n = stations.size();
    vector<int> howMany(n - 1, 0);
    priority_queue<pair<double, int>> pq;

    
    for(int i = 0; i < n - 1; i++) {
        pq.push({stations[i + 1] - stations[i], i}); 
    }
    for(int gasStation = 1; gasStation <= k; gasStation++) {
        auto tp = pq.top(); pq.pop();
        int secInd = tp.second;
        howMany[secInd]++;
        double iniDiff = stations[secInd + 1] - stations[secInd];
        double newSecLen = iniDiff / (double)(howMany[secInd] + 1);
        pq.push({newSecLen, secInd});
    }

    return pq.top().first;
}

//Optimal - TC: O(Nlog(len)), SC: O(1)
int numberOfGasStationsRequired(double dist, vector<int> &stations) {
    int n = stations.size();
    int cnt = 0;
    for(int i = 1; i < n; i++) {
        int numberInBetween = ((stations[i] - stations[i - 1]) / dist);
        if((stations[i] - stations[i - 1]) / dist == numberInBetween * dist) {
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

double minimizeMaxDist3(vector<int> &stations, int k) {
    int n = stations.size();
    double low = 0;
    double high = 0;
    for(int i = 0; i < n - 1; i++) {
        high = max(high, (double)(stations[i + 1] - stations[i]));
    }

    double diff = 1e-2;
    while(high - low > diff) {
        long double mid = (low + high) / (2.0);
        int cnt = numberOfGasStationsRequired(mid, stations);
        if(cnt > k) {
           low = mid;
        }
        else high = mid;
    }
    return high;
}

int main() {
  vector<int> stations = {3, 6, 12, 19, 33};
  int k = 3;

  double ans = minimizeMaxDist(stations, k);
  cout << ans << "\n";
  
  double ans2 = minimizeMaxDist2(stations, k);
  cout << ans2 << "\n";

  double ans3 = minimizeMaxDist3(stations, k);
  cout << setprecision(2)<< ans3;
  return 0;
}