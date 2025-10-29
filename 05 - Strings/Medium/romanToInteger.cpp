#include <bits/stdc++.h>

using namespace std;

int romanToInteger(string s) {
  int I = 1;
  int V = 5;
  int X = 10;
  int L = 50;
  int C = 100;
  int D = 500;
  int M = 1000;

  int a = 0, b = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'I' && s[i + 1] == 'V') {
      b = I;
      a = V;
    }
    else {
      b = I;
      a = X;
    }
  }
}

int main() {
  
  return 0;
}