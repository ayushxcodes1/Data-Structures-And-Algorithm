#include <bits/stdc++.h>

using namespace std;

//Brute: TC: O(), SC: O() - Map
string frequencySort(string s) { 
    int n = s.size();
    
    unordered_map<char, int> mpp;
    for(char c : s) {
        mpp[c]++;
    }
}

//Optimal - TC: O(N), SC: O(1)
// string frequencySort(string s) {
//     int n = s.size();
//     sort(s.begin(), s.end());
//     return s;
// }

int main() {
  string s = "tree";

  string ans = frequencySort(s);
  cout << "Brute: " << ans << endl;
  return 0;
}