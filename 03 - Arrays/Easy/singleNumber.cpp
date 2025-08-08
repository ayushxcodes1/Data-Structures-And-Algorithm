#include <bits/stdc++.h>

using namespace std;

//Brute - TC: O(N^2), SC: O(1)
int singleNumber(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == num) {
               cnt++;
            }
        }
        if(cnt == 1) return num;
    }
}

//Better - TC: O(N), SC: O(k)
void singleNumber2(vector<int> &arr) {
    int n = arr.size();
    int ans = -1;
    
    //O(k) - k is no. of distinct elements
    unordered_map<int, int> mpp;

    //O(N)
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    //O(k)
    for(auto it : mpp) {
        if(it.second == 1) {
           cout << "Single Number: " << it.first;
        }
    }
}

int main() {
  vector<int> arr = {4, 4, 2, 2, 1, 3, 3};

  int ans = singleNumber(arr);
  cout << "SingleNumber: " << ans;

  singleNumber2(arr);
  return 0;
}