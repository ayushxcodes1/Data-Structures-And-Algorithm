#include <bits/stdc++.h>

using namespace std;

//Brute: TC: O(), SC: O() - Map + Priority Queue
string frequencySort(string s) { 
    int n = s.size();
    
    unordered_map<char, int> freq;
    for(char c : s) {
        freq[c]++;
    }

    priority_queue<pair<int, char>> pq;
    for(auto &[ch, count] : freq) {
        pq.push({count, ch});
    }

    string ans = "";
    while(!pq.empty()) {
        auto [count, ch] = pq.top();
        pq.pop();
        ans.append(count, ch);
    }
    return ans;
}

//Optimal - TC: O(N), SC: O(1)
// string frequencySort(string s) {
//     int n = s.size();
//     sort(s.begin(), s.end());
//     return s;
// }

int main() {
  string s = "ccabb";

  string ans = frequencySort(s);
  cout << "Brute: " << ans << endl;
  return 0;
}