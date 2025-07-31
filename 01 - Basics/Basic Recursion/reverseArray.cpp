#include <bits/stdc++.h>
 
using namespace std;

//Approach 1
void reverseArray(int arr[], int l, int r) {
  if(l >= r) return;
  swap(arr[l], arr[r]);
  reverseArray(arr, l + 1, r - 1);
}

//Approach 2
void reverseArray2(int i, int arr[], int n) {
  if(i >= n / 2) return;
  swap(arr[i], arr[n - i - 1]);
  reverseArray2(i + 1, arr, n);
}

int main() {
  int arr[5] = {1, 3, 2, 5, 4};
  int n = sizeof(arr) / sizeof(arr[0]); 

  reverseArray(arr, 0, n - 1); //4 5 2 3 1

  for(auto it : arr) {
    cout << it << " ";
  }
  cout << endl;

  reverseArray2(0, arr, n); // 1 3 2 5 4

  for(auto it : arr) {
    cout << it << " ";
  }

  return 0;
}