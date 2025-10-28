#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(NlogN), SC: O(N) - Sort N Elements
string frequencySort(string s) { 
    vector<int> freq(128, 0);
    for(auto ch : s) freq[ch]++;

    //lambda function
    auto cmp = [&](char a, char b) {
        if(freq[a] == freq[b]) return a < b;
        return freq[a] > freq[b];
    };
    sort(s.begin(), s.end(), cmp);
    return s;
}

int main() {
  string s = "(1+(2*3)+((8)/4))+1";

  string ans = frequencySort(s);
  cout << "Brute: " << ans << endl;

//   string ans2 = frequencySort2(s);
//   cout << "Better: " << ans << endl;

//   string ans3 = frequencySort3(s);
//   cout << "Optimal: " << ans3 << endl;
  return 0;
}