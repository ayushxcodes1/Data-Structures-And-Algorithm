#include <bits/stdc++.h>

using namespace std;

void print(int cnt, string name) {
    if(cnt > 5) return;
    cout << name << endl;
    print(cnt + 1, name);
}

int main() {
  string name = "Ayush";
  print(1, name);
  return 0;
}