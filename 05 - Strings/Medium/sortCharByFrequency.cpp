#include <bits/stdc++.h>

using namespace std;

//Method 1 - TC: O(N), SC: O(N) - ASCII Array
string frequencySort(string s) { 
    vector<int> freq(128, 0);
    for(auto ch : s) freq[ch]++;

    auto cmp = [&](char a, char b) {
        if(freq[a] == freq[b]) return a < b;
        return freq[a] > freq[b];
    };
    sort(s.begin(), s.end(), cmp);
    return s;
}

//Method 2 - TC: O(N), SC: O(N) - ASCII Array
string frequencySort(string s) { 
    int n = s.size();
    
    vector<pair<char, int>> v(123);

    for(char &ch : s) {
        int freq = v[ch].second;
        v[ch] = {ch, freq + 1};
    }

    auto cmp = [&](pair<char, int> &a, pair<char, int> &b) {
        return a.second > b.second;
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

//Method 2 - TC: O(NlogK), SC: O(N) - Map + Priority Queue
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