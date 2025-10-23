#include <bits/stdc++.h>

using namespace std;

//Brute: TC: O(NlogN), SC: O(1) - Sorting
string frequencySort(string s) { 
    int n = s.size();
    sort(s.begin(), s.end());
    return s;
}

//Optimal - TC: O(N), SC: O(1) - Two Pointers
string frequencySort(string s) {
    int n = s.size();
    sort(s.begin(), s.end());
    return s;
}

int main() {
  string s = "tree";

  string ans = frequencySort(s);
  cout << "Brute: " << ans << endl;
  return 0;
}