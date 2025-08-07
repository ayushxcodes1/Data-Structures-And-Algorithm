#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(2N), SC: O(N)
void moveZeroes(vector<int> &arr, int n) {
    vector<int> temp;

    for(int i = 0; i < n; i++) { 
        if(arr[i] != 0) {
           temp.push_back(arr[i]);
        } 
    }

    for(int i = 0; i < temp.size(); i++) { 
        arr[i] = temp[i];
    }

    for(int i = temp.size(); i < n; i++) { 
        arr[i] = 0;
    }
}

//Optimal - TC: O(N), SC: O(1)
void moveZeroes2(vector<int> &arr, int n) {
    int j = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
           j = i;
           break;
        }
    }

    if(j == -1) return; // No zero found

    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
           swap(arr[i], arr[j]);
           j++;
        }
    }
}

int main() {
  vector<int> arr = {0, 1, 0, 3, 12};
  int n = arr.size();

  moveZeroes2(arr, n);

  for(auto it : arr) {
    cout << it << " ";
  }

  return 0;
}