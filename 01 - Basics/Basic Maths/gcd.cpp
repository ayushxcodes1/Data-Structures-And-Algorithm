#include <bits/stdc++.h>

using namespace std;

// Time Complexity - O(min(N1, N2)) - 1 to min
int findGcd(int n1, int n2) {
    n1 = abs(n1); // convert negatives to positive
    n2 = abs(n2);
    
    if (n1 == 0 && n2 == 0) return -1; //GCD undefined
    if (n1 == 0 || n2 == 0) return n1 == 0 ? n2 : n1; // Returns the non-zero number

    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if ((n1 % i == 0) && (n2 % i == 0)) {
            gcd = i;
        }
    }
    return gcd;
}

// Time Complexity - O(min(N1, N2)) - min to 1
int findGcd2(int n1, int n2) {
    n1 = abs(n1);
    n2 = abs(n2);

    if (n1 == 0 && n2 == 0) return -1;
    if (n1 == 0 || n2 == 0) return n1 == 0 ? n2 : n1;


    for (int i = min(n1, n2); i >= 1; i--) {
        if ((n1 % i == 0) && (n2 % i == 0)) {
            return i;
        }
    }
    return 1; //never executes
}

// Time Complexity - O(logφ(min(n1, n2))) - Euclidean Algorithm
int findGcd3(int n1, int n2) {
    n1 = abs(n1);
    n2 = abs(n2);

    if (n1 == 0 && n2 == 0) return -1;
    if (n1 == 0 || n2 == 0) return n1 == 0 ? n2 : n1;

    while (n1 > 0 && n2 > 0) {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        return n2;
    return n1;
}


int main() {
    int res = findGcd(52, 10); 
    int res2 = findGcd2(52, 10);
    int res3 = findGcd3(52, 10);
    
    int res4 = __gcd(52, 10); //Euclidean Algorithm using STL

    cout << res << endl; 
    cout << res2 << endl; 
    cout << res3 << endl;
    cout << res4 << endl;
    return 0;
}