#include <bits/stdc++.h>

using namespace std;

//Brute Force - TC: O(N^4), SC: O(no. of quadruplets)
vector<vector<int>> fourSum(vector<int> arr, int target) {
    int n = arr.size();
    set<vector<int>> st;
    sort(temp.begin(), temp.end()); 
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target) {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
  vector<int> arr = {-1, 0, -1, 0, -2, 2};

  vector<vector<int>> ans = fourSum(arr, 0);
  for(auto it : ans) {
    for(auto ele : it) {
        cout << ele << " ";
    }
    cout << endl;
  }
  
  return 0;
}