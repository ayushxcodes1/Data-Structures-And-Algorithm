#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(NlogN), SC: O(N) - N Distinct Elements
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

//Better - TC: O(NlogK), SC: O(N) - K Distinct Elements
string frequencySort(string s) { 
    unordered_map<char, int> freq; //O(N)
    for(char ch : s) freq[ch]++; //O(N)

    vector<pair<char, int>> freqArr;
    for(auto [ch, fq] : freq) {
        freqArr.push_back({ch, fq});
    }

    auto cmp = [&] (pair<char, int> &a, pair<char, int> &b) {
        return a.second > b.second;
    };
    sort(freqArr.begin(), freqArr.end(), cmp); //KlogK

    string ans = "";
    for(auto [ch, fq] : freqArr) ans.append(fq, ch); //O(N)
    return ans;
}

//Optimal - TC: O(N), SC: O(N) - Bucket Sort
string frequencySort(string s) {
    unordered_map<char, int> freq;
    for(char ch : s) freq[ch]++;

    vector<vector<char>> bucketData(s.length() + 1);
    for(auto [ch, fq] : freq) bucketData[fq].push_back(ch);

    string ans = "";
    for(int fq = s.length(); fq >= 1; fq--) {
        for(auto ch : bucketData[fq]) {
            ans.append(fq, ch);
        }
    }
    return ans;
}

int main() {
  string s = "ccabb";

  string ans = frequencySort(s);
  cout << "Brute: " << ans << endl;
  return 0;
}