#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int findMissing(vector<int> arr, int n) {
    for(int i = 1; i <= n; i++) {
        bool found = false;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] == i) {
               found = true;
               break;
            }
        }
        if(!found) return i;
    }
    return -1;
}

//Better - TC: O(2N), SC: O(N)
int findMissing2(vector<int> arr, int n) {
    vector<int> hash(n + 1, 0);

    for(int i = 0; i < arr.size(); i++) {
        hash[arr[i]] = 1;
    }

    for(int i = 1; i <= n; i++) {
        if(hash[i] == 0) {
           return i;
        }
    }
    return -1;
} 

//Optimal1 - TC: O(N), SC: O(1)
int findMissing3(vector<int> arr, int n) {
    int sum = n * (n + 1) / 2;
    int s2 = 0;

    for(int i = 0; i < arr.size(); i++) {
        s2 += arr[i];
    }

    return (sum - s2);
}

//Optimal2 - TC: O(N), SC: O(1)
int findMissing4(vector<int> arr, int N) {
  int n = arr.size();
  int xorAll = 0;

  for(int i = 0; i < n; i++) {
    xorAll ^= arr[i];
    xorAll ^= (i + 1);
  }
  xorAll ^= N;  

  return xorAll;
} 

int main() {
  vector<int> arr = {1, 2, 4, 5};
  int n = 5;

  int res = findMissing3(arr, n);
  cout << "Missing Number: " << res;

  return 0;
}