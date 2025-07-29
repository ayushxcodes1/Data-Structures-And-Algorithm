#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(N)
bool isPrime(int n) {
    if(n <=0) {
        cout << "Non-Prime";
        return -1;
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
           cnt++;
        }
    }

    if(cnt == 2) cout << "Prime";
    else cout << "Non-Prime";
}

//Time Complexity - O(sqrt(N))
bool isPrime2(int n) {
    if(n <=0) {
       cout << "Non-Prime";
       return -1;
    }

    int cnt2 = 0;

    for(int i = 1; i*i<=n; i++){
        if(n % i == 0) {
           cnt2++;
           if((n/i) != i) {
              cnt2++;
           }
        }
    }
     
    if(cnt2 == 2) cout << "Prime";
    else cout << "Non-Prime";
}

int main() {
//   isPrime(5);
  isPrime2(6);
  return 0;
}
