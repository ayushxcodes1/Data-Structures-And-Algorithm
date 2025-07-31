#include <bits/stdc++.h>

using namespace std;

// TC: O(N), SC: O(N)
void printName(int n) {
  if(n < 1) return;
  cout << "Ayush" << endl;
  printName(n - 1);
}

int main() {
  int n = 5;
  printName(n);
  return 0;
}