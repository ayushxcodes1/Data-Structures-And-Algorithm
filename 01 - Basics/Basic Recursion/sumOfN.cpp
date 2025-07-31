#include <bits/stdc++.h>
 
using namespace std;

//Parametrized Recursion
void SumOfN(int i, int sum) {
    if(i < 1) {
       cout << "sum is " << sum << endl;
       return;
    }

    SumOfN(i - 1, sum + i);
}

//Functional Recursion
int SumOfN2(int n) {
   if(n == 0) return 0;
   return n + SumOfN2(n - 1);
}

int main() {

  SumOfN(3, 0); //Parametrized

  int sum = SumOfN2(3);
  cout << "sum is " << sum; //Functional
  return 0;
}