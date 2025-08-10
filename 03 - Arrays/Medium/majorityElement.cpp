#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(1)
int majorityElement(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]) {
               cnt++;
            }
        } 
        if(cnt > (n / 2)) return arr[i];
    }

    return -1;
}

//Better - TC: O(NlogN), SC: O(N)
int majorityElement2(vector<int> arr) {
    int n = arr.size();
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        if(it.second > n / 2) {
           return it.first;
        }
    }

    return -1;
}

int main() {
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
  int res = majorityElement(arr);
  cout << "Majority Element: " << res;

  cout << endl;

  int res2 = majorityElement2(arr);
  cout << "Majority Element: " << res2;
  return 0;
}