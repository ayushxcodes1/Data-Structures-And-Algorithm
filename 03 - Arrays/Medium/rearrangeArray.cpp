#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    vector<int> pos;
    vector<int> neg;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
           pos.push_back(arr[i]);
        }
        else {
           neg.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
           arr[i] = pos[i];
        } 
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) {
           arr[i] = neg[i];
        } 
    }
    return arr;
}

int main() {
  vector<int> arr = {-3, -1, 2, -5, 4, 8};
  vector<int> res = rearrangeArray(arr);
  for(auto it : res) {
    cout << it << " ";
  }
  return 0;
}