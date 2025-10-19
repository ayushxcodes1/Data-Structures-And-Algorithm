#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = stoi(s); //52
    string ans = "";
    
    while(num > 0) {
        int lastDigit = num % 10;
        
        //even
        if(lastDigit % 2 == 0) {
           num = num / 10; 
        }
        ans = num; 
        return ans;
    }
}

int main() {
  string s = "52";

  string ans = largestOddNumber(s);
  cout << ans;

  return 0;
}