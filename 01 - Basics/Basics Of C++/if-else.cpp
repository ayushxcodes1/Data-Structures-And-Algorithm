#include <iostream>

using namespace std;

int main() {
    int age;
    cin >> age;
    if(age >= 18) {
       cout << "Eligible for driving license.";
    }
    else {
       cout << "Not eligible for driving license.";
    }
    return 0;
}