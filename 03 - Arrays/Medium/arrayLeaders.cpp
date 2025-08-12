#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^2), SC: O(N)
vector<int> arrayLeaders(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        bool leader = true;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
               leader = false;
               break;
            }
        }
        if(leader) {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

//Optimal
vector<int> arrayLeaders(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++) {
       
    }
}

int main() {
  vector<int> arr = {16, 17, 4, 3, 5, 2};
  vector<int> ans = arrayLeaders(arr);
  cout << "Leaders: ";
  for(auto it : ans) {
    cout << it << " "; 
  }
  return 0;
}