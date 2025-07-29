#include <bits/stdc++.h>

using namespace std;

void printAllDivisors(int n) {
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
           cout << i << " ";
        }
    }
}

int main() {
    printAllDivisors(36);
    return 0;
}