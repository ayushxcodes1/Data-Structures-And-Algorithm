#include <bits/stdc++.h>

using namespace std;

void isArmstrong(int n) {
   int sum = 0;
   int dup = n;

   while(n > 0) {
    int lastDigit = n % 10;
    sum += (lastDigit * lastDigit * lastDigit);
    n = n / 10;
   }
   if(sum == dup) cout << "True";
   else cout << "False";
}

int main() {
    isArmstrong(153);
    return 0;
}