#include <bits/stdc++.h>

using namespace std;

void printName(int cnt, string name) {
    if(cnt > 5) return;
    cout << name << endl;
    printName(cnt + 1, name);
}

int main() {
  string name = "Ayush";
  printName(1, name);
  return 0;
}