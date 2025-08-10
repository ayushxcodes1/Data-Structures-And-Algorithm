#include <bits/stdc++.h>

using namespace std;

//Brute Force 
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
}

int main() {
  vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
  int res = majorityElement(arr);
  cout << res;
  return 0;
}