#include <bits/stdc++.h>
 
using namespace std;

//Parametrized

//Functional 
int  Factorial2(int n) {
   if(n == 1) return 1;
   return n * Factorial2(n - 1);
}

int main() {
  int res = Factorial2(5);
  cout << "factorial is " << res; 
  return 0;
}