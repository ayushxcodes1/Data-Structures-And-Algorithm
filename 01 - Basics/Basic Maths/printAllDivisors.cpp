#include <bits/stdc++.h>

using namespace std;

//Time Complexity - O(n)
void printAllDivisors(int n) {
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
           cout << i << " ";
        }
    }
}

//Time Complexity - O(sqrt(n) + k log k)
void printAllDivisors2(int n) {
    vector<int> ls;

    //O(sqrt(N))
    for(int i = 1; i*i<=n; i++){
        if(n % i == 0) {
           ls.push_back(i);
           if((n/i) != i) {
            ls.push_back(n/i);
           }
        }
    }

    //O(k * logk)) - k is the no. of factors
    sort(ls.begin(), ls.end());

    //O(k)
    for(auto it : ls) {
        cout << it << " ";
    }
}

int main() {
    // printAllDivisors(36);
    printAllDivisors2(36);
    return 0;
}