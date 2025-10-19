#include <bits/stdc++.h>

using namespace std;

string largestOddNumber(string s) {
    int num = s;
    int lastDigit = num % 10;
    string ans = "";

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