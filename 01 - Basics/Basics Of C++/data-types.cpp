#include <iostream>

using namespace std;

int main() {
    //int, long, long long, float, double
    //string and getline
    //char

    int a = 10;
    long long b = 10000000000LL;
    float c = 5.5;
    double d = 3.14159265359;
    char ch = 'Z';
    string name;
    
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "int: " << a << "\n";
    cout << "long long: " << b << "\n";
    cout << "float: " << c << "\n";
    cout << "double: " << d << "\n";
    cout << "char: " << ch << "\n";
    cout << "string: " << name << "\n";

    return 0;
}