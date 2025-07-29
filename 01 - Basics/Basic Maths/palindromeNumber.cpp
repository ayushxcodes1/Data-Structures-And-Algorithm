#include <bits/stdc++.h>

using namespace std;

void palindromeNumber(int n) {
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
