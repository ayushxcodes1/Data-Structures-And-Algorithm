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

//Optimal - TC: O(N), SC: O(N)
vector<int> arrayLeaders2(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > maxi) {
           ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    return ans;
}

int main() {
  vector<int> arr = {16, 17, 4, 3, 5, 2};

  vector<int> ans = arrayLeaders(arr);
  cout << "Leaders: ";
  for(auto it : ans) {
    cout << it << " "; 
  }

  cout << endl;

  vector<int> ans2 = arrayLeaders2(arr);
  cout << "Leaders: ";
  for(auto it : ans2) {
    cout << it << " "; 
  }
  return 0;
}