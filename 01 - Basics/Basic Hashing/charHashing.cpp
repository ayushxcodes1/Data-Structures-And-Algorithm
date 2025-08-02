#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "abcdabefc";

  //pre compute
  int hash[256] = {0};
  for(int i = 0; i < s.size(); i++) {
    hash[s[i]]++;
  } 

  char ch;
  while(cin >> ch) {
    cout << hash[ch] << " ";
  }
  
  return 0;
}