#include <bits/stdc++.h>

using namespace std;

void print1(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print3(int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void print4(int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

void print5(int n) {
    for (int i = n; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

void print6(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void print7(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void print8(int n) { //4
    for (int i = n; i > 0; i--) { //n = 4 -> 1
        // space
        for (int j = 0; j < n - i; j++) { 
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }   
        // space
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void print9(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--) {
        // space
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }   
        // star
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void print10(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if(i > n) stars = 2 * n - i; 
       
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print11(int n) {
    int start = 1;
    for (int i = 0; i <= n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void print12(int n) {
    int space = 2 * (n - 1);
    for(int i = 1; i <= n; i++) {
        //numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        //spaces
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }

        //numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void print13(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void print14(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print15(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}


int main() {
    // print1(4);
    // print2(5);
    // print3(5);
    // print4(5);
    // print5(4);
    // print6(5);
    // print7(5);
    // print8(5);
    // print9(5);
    // print10(5);
    // print11(4);
    // print12(4);
    // print13(4);
    // print14(4);
    print15(4);
    return 0;
}
