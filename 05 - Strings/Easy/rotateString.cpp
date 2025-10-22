#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
bool rotateString(string s, string goal) {
    int n = s.size();
    int m = goal.size();
    if(n != m) return false;

    for(int i = 0; i < n; i++) {
        if(s == goal) return true;
        rotate(s.begin(), s.begin() + 1, s.end());
    }
    return false;
}

//Optimal 1 - TC: O(N), SC: O(N)
bool rotateString2(string s, string goal) {
    int n = s.size();
    int m = goal.size();
    if(n != m) return false;

    string doubledS = s + s; //O(2N)
    return doubledS.find(goal) != string::npos;
}

//Optimal 2 - TC: O(N), SC: O(N) - KMP Algorithm
// Step 1: Build the LPS (Longest Prefix Suffix) array
vector<int> computeLPS(string goal) {
    int m = goal.size();
    vector<int> lps(m, 0);
    int len = 0; // length of previous longest prefix suffix which were equal
    int i = 1;

    while (i < m) {
        if (goal[i] == goal[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0)
                len = lps[len - 1]; // try smaller prefix
            else
                lps[i++] = 0; // no prefix found
        }
    }
    return lps;
}

// Step 2: KMP search function
bool KMP(string text, string goal) {
    int n = text.size(); 
    int m = goal.size();
    vector<int> lps = computeLPS(goal);
    int i = 0; // index for text
    int j = 0; // index for goaltern

    while (i < n) {
        if (text[i] == goal[j]) {
            i++;
            j++;
        }

        if (j == m) { // full goaltern found
            return true;
        } else if (i < n && text[i] != goal[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return false;
}

// Step 3: Check rotation using KMP
bool rotateString3(string s, string goal) {
    if (s.size() != goal.size()) return false;
    string doubled = s + s; // all possible rotations appear here
    return KMP(doubled, goal);
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << "Brute: " << ans << endl;

  bool ans2 = rotateString2(s, goal);
  cout << "Optimal 1: " << ans2 << endl;
  
  bool ans3 = rotateString3(s, goal);
  cout << "Optimal 2 : " << ans3 << endl;

  return 0;
}