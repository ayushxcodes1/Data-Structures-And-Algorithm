#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = stoi(s);
    
    while(num % 2 == 0) {
        num = num / 10; 
    }
    return to_string(num);
}

int main() {
  string s = "52";

  string ans = largestOddNumber(s);
  cout << ans;

  return 0;
}