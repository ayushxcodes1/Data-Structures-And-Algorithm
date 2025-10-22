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
void computeLPS(string &goal, vector<int> &LPS, int M) {
    int len = 0; //Length of previous longest prefix & suffix which were equal

    LPS[0] = 0;
    
    int i = 1;
    while(i < M) {
        if(goal[i] == goal[len]) {
           len++;
           LPS[i] = len;
           i++;
        }
    }
}

bool rotateString3(string s, string goal) {
    int N = s.size();
    int M = goal.size();
    if(N != M) return false;

    vector<int> result;

    //Create an LPS array
    vector<int> LPS(M, 0);

    computeLPS(goal, LPS, M);

    //Apply KMP
    int i = 0;
    int j = 0;
    while(i < M) {
        if(s[i] == goal[i]) {
           i++;
           j++;
        }
        if(j == M) {
           return result.push_back(i - M + 1);
           j = LPS[j - 1];
        } else if(s[i] != goal[j]){
            if(j != 0) {
               j = LPS[j - 1];
            }
        } else {
            i++;
        }
    }
    return result;
}

int main() {
  string s = "abcde";
  string goal = "abced";

  bool ans = rotateString(s, goal);
  cout << "Brute: " << ans << endl;

  bool ans2 = rotateString2(s, goal);
  cout << "Optimal 1: " << ans2 << endl;
  
  bool ans3 = rotateString2(s, goal);
  cout << "Optimal 2 : " << ans3 << endl;

  return 0;
}