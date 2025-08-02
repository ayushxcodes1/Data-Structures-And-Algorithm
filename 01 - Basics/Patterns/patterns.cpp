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

void print8(int n) { 
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
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print16(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print17(int n) {
    for(int i = 0; i < n; i++) {
        //spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        //characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for(int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }

        //spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void print18(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        } 
        cout << endl;
    }
}

void print19(int n) {
    //Upper Half
    for(int i = 0; i < n; i++) {
        //stars
        for(int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        //space
        for(int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        //stars
        for(int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //Lower Half
    for(int i = 0; i < n; i++) {
        //stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }

        //space
        for(int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        //stars
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void print20(int n) {   
    int spaces = 2 * n - 2; 
    for(int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if(i > n) stars = 2 * n - i;

        //stars
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }

        //space
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        //stars
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

void print21(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  
    }
}

void print22(int n) {
    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < 2 * n - 1; j++) {
        
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
    // print15(4);
    // print16(4);
    // print17(4);
    // print18(5);
    // print19(4);
    // print20(4);
    // print21(4);
    print22(4);
    return 0;
}
