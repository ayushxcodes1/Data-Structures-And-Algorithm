#include <bits/stdc++.h>

using namespace std;

vector<int> majorityElementII(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(arr[j] == arr[i]) {
                
            }
        }
    }
}

int main() {
  vector<int> arr = {1, 1, 2, 3, 3, 2};  
  vector<int> ans = majorityElementII(arr);
  return 0;
}