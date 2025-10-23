#include <bits/stdc++.h>

using namespace std;

//Brute: TC: O(NlogK), SC: O(N) - Map + Priority Queue
string frequencySort2(string s) { 
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

//Brute: TC: O(N), SC: O(N) - ASCII Array Method
string frequencySort(string s) { 
    int n = s.size();
    
    vector<pair<char, int>> v(123);

    for(char &ch : s) {
        int freq = v[ch].second;
        v[ch] = {ch, freq + 1};
    }

    auto lambda = [&](pair<char, int> &p1, pair<char, int> &p2) {
        return p1.second > p2.second;
    };

    string ans = "";
    for(int i = 0; i <= 122; i++) {
        if(v[i].second > 0) {
           char ch = v[i].first;
           int freq = v[i].second;
           string temp = string(freq, ch);

           ans += temp;
        }
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