#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "abcdabefc";

  //pre compute
  map<char, int> mpp;
  for(int i = 0; i < s.size(); i++) {
    mpp[s[i]]++;
  }

  //iterate on the map
  for(auto it : mpp) {
    cout << it.first << "->" << it.second << endl;
  }

//   int q;
//   while(cin >> q) {
//     cout << q << " -> " << mpp[q] << endl;
//   }

  return 0;
}