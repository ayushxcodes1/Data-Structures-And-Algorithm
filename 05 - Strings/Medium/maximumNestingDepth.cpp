#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(), SC: O() - Depth Counter
string maxDepth(string s) { 
    
}

int main() {
  string s = "(1+(2*3)+((8)/4))+1";

  string ans = maxDepth(s);
  cout << "Brute: " << ans << endl;

//   string ans2 = frequencySort2(s);
//   cout << "Better: " << ans << endl;

//   string ans3 = frequencySort3(s);
//   cout << "Optimal: " << ans3 << endl;
  return 0;
}