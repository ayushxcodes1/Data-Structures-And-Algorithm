#include <bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int> arr) {
    int n = arr.size();
    vector<int> positives;
    vector<int> negatives;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
           positives.push_back(arr[i]);
        }
        else {
           negatives.push_back(arr[i]);
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