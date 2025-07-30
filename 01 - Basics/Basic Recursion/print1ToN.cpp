#include <bits/stdc++.h>

using namespace std;

void print(int cnt, int n) {
    if(cnt > n) return;
    cout << cnt << " ";
    print(cnt + 1, n);
}

int main() {
  int n = 10;
  print(1, n);
  return 0;
}