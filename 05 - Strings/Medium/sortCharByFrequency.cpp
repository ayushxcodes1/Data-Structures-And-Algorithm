#include <bits/stdc++.h>

using namespace std;

string frequencySort(string s) {
    int n = s.size();
    sort(s.end(), s.begin());
    return s;
}

int main() {
  string s = "tree";

  string ans = frequencySort(s);
  cout << "Brute: " << ans << endl;
  return 0;
}