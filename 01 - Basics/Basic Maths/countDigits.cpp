#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(log₁₀ * N)
int countDigit(int n) {
    if (n == 0) return 1;

    n = abs(n);
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n / 10;
    }
    return cnt;
}

int countDigit2(int n) {
    if (n == 0) return 1;

    int cnt = (int)(log10(abs(n)) + 1);
    return cnt;
}

int main() {
    int res = countDigit(0); 
    int res2 = countDigit2(0); 

    cout << res << endl; 
    cout << res2 << endl; 

    return 0;
}