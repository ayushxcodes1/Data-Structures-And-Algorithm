#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int findMissing(vector<int> arr, int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] != i) {
               return i;
            }
            i++;
        }
    }
    return -1;
}

//Optimal - TC: O(N), SC: O(1)
int findMissing2(vector<int> arr, int n) {
    int i = 0, j = 1;
    while(i <= n && j <= n) {
        if((arr[i] + 1) != arr[j]) {
           return arr[i] + 1;
        }
        i++;
        j++;
    }

    return -1; 
}

int main() {
  vector<int> arr = {1, 2, 4, 5};
  int n = 5;

  int res = findMissing2(arr, n); 
  cout << "Missing Number: " << res;

  return 0;
}