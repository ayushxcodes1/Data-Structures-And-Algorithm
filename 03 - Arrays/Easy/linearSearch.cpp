#include <bits/stdc++.h>

using namespace std;

//TC: O(N), SC: O(1)
int linearSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i; //found
        }
    }
    return -1; //not found
}

int main() {
    int arr[5] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int res = linearSearch(arr, n, 4);
    cout << res;

  return 0;
}