#include <bits/stdc++.h>

using namespace std;

void print(int cnt, int n) {
    if(cnt > n) return;
    cout << n << " ";
    print(cnt, n - 1);
}

int main() {
  int n = 10;
  print(1, n);
  return 0;
}