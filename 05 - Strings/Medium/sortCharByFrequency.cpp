#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(NlogN), SC: O(N) - N Elements
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

//Better - TC: O(NlogK), SC: O(logK) - K Distinct Elements
string frequencySort2(string s) { 
    unordered_map<char, int> freq; //O(k) space
    for(char ch : s) freq[ch]++;  //O(N) time

    vector<pair<char, int>> freqArr; //O(k) space
    for(auto [ch, fq] : freq) {
        freqArr.push_back({ch, fq});
    }

    auto cmp = [&] (pair<char, int> &a, pair<char, int> &b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    };
    sort(freqArr.begin(), freqArr.end(), cmp); //O(klogk) time & O(logK) space

    string ans = ""; //O(N) space
    for(auto [ch, fq] : freqArr) ans.append(fq, ch); //O(N) time
    return ans;
}

//Optimal - TC: O(N), SC: O(N) - Bucket Sort
string frequencySort3(string s) {
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

  string ans2 = frequencySort2(s);
  cout << "Better: " << ans << endl;

  string ans3 = frequencySort3(s);
  cout << "Optimal: " << ans3 << endl;
  return 0;
}