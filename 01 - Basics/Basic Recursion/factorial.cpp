#include <bits/stdc++.h>
 
using namespace std;

//Parametrized
void Factorial(int i, int res) {
   if(i < 1) { 
    cout << "factorial is " << res << endl;
    return;
   }

   Factorial(i - 1, res * i); 
}

//Functional
int Factorial2(int n) {
   if(n == 1) return 1;
   return n * Factorial2(n - 1);
}

int main() {
  Factorial(5, 1); //Parametrized
 
  int res = Factorial2(5);
  cout << "factorial is " << res; //Functional 
  return 0;
}