#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^3), SC: O(N^3)
vector<vector<int>> threeSum(vector<int> arr) {
    int n = arr.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> triplet = {arr[i], arr[j], arr[k]};
                    sort(triplet.begin(), triplet.end()); 
                    st.insert(triplet);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
  vector<int> arr = {-1, 0, 1, 2, -1, 4};
  vector<vector<int>> ans = threeSum(arr);
  for(auto it : ans) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }

  cout << endl;

  vector<vector<int>> ans2 = threeSum2(arr);
  for(auto it : ans2) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }

  return 0;
}