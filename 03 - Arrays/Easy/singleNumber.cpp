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

//Better - TC: O((N log M) + (N/2 + 1)), SC: O((N/2) + 1)
void singleNumber2(vector<int> &arr) {
    int n = arr.size();
    
    //O(k) - k is no. of distinct elements
    unordered_map<int, int> mpp;

    //O(N log M), N is length of array, M is size of map
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++; 
    }

    //O((N/2) + 1)
    for(auto it : mpp) {
        if(it.second == 1) {
           cout << "Single Number: " << it.first;
        }
    }
}


int main() {
  vector<int> arr = {4, 4, 2, 2, 1, 3, 3};

  int ans = singleNumber(arr);
  cout << "Single Number: " << ans << "\n";
 
  singleNumber(arr);

  return 0;
}