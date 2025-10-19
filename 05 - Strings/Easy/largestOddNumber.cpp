#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = stoi(s);
    string ans = "";
    
    //even
    int lastDigit = num % 10;
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