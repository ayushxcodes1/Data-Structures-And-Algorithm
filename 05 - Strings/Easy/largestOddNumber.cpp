#include <bits/stdc++.h>

using namespace std;

//Brute - TC(N), SC: O(N)
string largestOddNumber(string s) {
    if(s == "") return "";

    int num = stoi(s);
    
    while(num % 2 == 0) {
        num = num / 10; 
    }

    if(num == 0) return "";
    
    return to_string(num);
}

int main() {
  string s = "";

  string ans = largestOddNumber(s);
  cout << ans;

  return 0;
}