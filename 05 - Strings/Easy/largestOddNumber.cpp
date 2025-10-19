#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = stoi(s);
    string ans = "";
    
    int lastDigit = num % 10;
    
    //even
    while(lastDigit % 2 == 0) {
       num = num / 10; 
    }

    //odd
    ans = num;  
    return ans;
}

int main() {
  string s = "52";

  return 0;
}