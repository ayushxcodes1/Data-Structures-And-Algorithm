#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = stoi(s);
    string ans = "";
    
    int lastDigit = num % 10;
    
    //even
    if(lastDigit % 2 == 0) {
       num = num / 10; 
    }
    else {
       ans = num;  
    }
}

int main() {
  string s = "52";

  return 0;
}