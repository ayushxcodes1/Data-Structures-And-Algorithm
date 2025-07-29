#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(log₁₀ * N)
void palindromeNumber(int n) {

 if(n < 0) {
  cout << "False";
  return;
 } 
 
 int revNum = 0;
 int dup = n;

  while(n > 0) {
    int lastDigit = n % 10;
    revNum = (revNum * 10) + lastDigit;
    n = n / 10;
  }
   if(revNum == dup) cout << "True";
   else cout << "False";
}

int main() {
  palindromeNumber(121);
  return 0;
}
