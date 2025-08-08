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

//Better - TC: O(3N), SC: O(maxi)
int singleNumber2(vector<int> &arr) {
    int n = arr.size();

    int maxi = arr[0];
    for(int i = 0; i < n; i++) {  
        maxi = max(maxi, arr[i]);
    }
    
    vector<int> hash(n + 1, 0);

    for(int i = 0; i < n; i++) { 
        hash[arr[i]]++;
    }
    
    for(int i = 0; i <= n; i++) { 
        if(hash[arr[i]] == 1) {
           return arr[i];
        }
    }

    return -1;
}

//Optimal - TC: O(N), SC: O(k)
void singleNumber3(vector<int> &arr) {
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
  cout << "Single Number: " << ans << "\n";

  int ans2 = singleNumber2(arr);
   cout << "Single Number: " << ans2;
  return 0;
}