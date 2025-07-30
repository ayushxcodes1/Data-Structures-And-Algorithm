#include <bits/stdc++.h>

using namespace std;

void printName(int i, string name) {
    if(i > 5) return;
    cout << name << endl;
    printName(i + 1, name);
}

int main() {
  string name = "Ayush";
  printName(1, name);
  return 0;
}