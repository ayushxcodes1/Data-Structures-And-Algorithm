#include <bits/stdc++.h>

using namespace std;

//Brute Force
vector<int> arrayLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    int leader = -1;
    for(int i = 0; i < n - 1; i++) {
        leader = arr[i];
        for(int j = i + 1; j < n; j++) {
            if(!(arr[j] >= arr[i])) {
               break;
            }
        }
        leaders.push_back(arr[i]);
    }
    leaders.push_back(arr[n - 1]);
    return leaders;
}

int main() {
  vector<int> arr = {16, 17, 4, 3, 5, 2};
  vector<int> ans = arrayLeaders(arr);
  for(auto it : ans) {
    cout << it << " "; 
  }
  return 0;
}